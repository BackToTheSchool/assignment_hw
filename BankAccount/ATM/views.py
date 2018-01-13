from django.http import HttpResponse, JsonResponse
from django.shortcuts import redirect
from django.template.loader import render_to_string
from django.views.decorators.csrf import csrf_exempt

from ATM import apis
from ATM.models import Customer, Account
import json

cust = Customer()
acc = Account()
url_type = ''


@csrf_exempt
def signup_result_page(request):
    if request.method == 'POST':

        try:
            name = request.POST.get('name')
            uid = request.POST.get('user_id')
            pwd = request.POST.get('password')
            dob = request.POST.get('date_of_birth')

            # signup_result_api의 리턴 값이 json타입이니까 dict타입으로 캐스팅해서 출력
            dict1 = json.loads(apis.signup_result_api(name, uid, pwd, dob))
        except ValueError:
            return redirect(error_page)
        else:
            return HttpResponse(render_to_string("signup_result.html", dict1))


@csrf_exempt
def signup_page(request):
    return HttpResponse(render_to_string('signup.html'))


def main_page(request):
    return HttpResponse(render_to_string('main.html'))


@csrf_exempt
def login_page(request):
    if 'curr_usr' in request.session:
        Customer.objects.get(user_id=request.session['curr_usr'])  # 조건과 일치하는 데이터 SELECT
        return redirect(select_action_page)
    else:
        return HttpResponse(render_to_string('login.html'))


@csrf_exempt
def login_action(request):
    if request.method == 'POST':
        uid_input = request.POST.get('UserId')
        pwd_input = request.POST.get('Password')
        login_result = apis.login_action_api(uid_input, pwd_input)

        if not login_result:
            redirect(error_page)
        else:
            request.session['curr_usr'] = login_result # 세션에 'cuur_usr'라는 변수에 값 추가
            return redirect(select_action_page)


@csrf_exempt
def select_action_page(request):
    return HttpResponse(render_to_string('select_action.html'))


@csrf_exempt
def create_acc_page(request):
    return HttpResponse(render_to_string('create_acc.html'))


@csrf_exempt
def deposit_page(request):
    dict1 = {'dep_or_with': '입금', 'url_type': request.POST.get('url_type')}
    acc_num = request.session['acc_info']
    dict1['acc_number'] = acc_num
    dict1['balance'] = Account.objects.values_list('balance', flat=True).get(account_number=acc_num)
    return HttpResponse(render_to_string('dep_or_with.html', dict1))


@csrf_exempt
def withdraw_page(request):
    dict1 = {'dep_or_with': '출금', 'url_type': request.POST.get('url_type')}
    acc_num = request.session['acc_info']
    dict1['acc_number'] = acc_num
    dict1['balance'] = Account.objects.values_list('balance', flat=True).get(account_number=acc_num)
    return HttpResponse(render_to_string('dep_or_with.html', dict1))


@csrf_exempt
def select_account_page(request):
    dict1 = {}
    if request.method == 'POST':
        trans_type = request.POST.get('type')
        acc_list = Account.objects.filter(user_id=request.session['curr_usr'])
        dict1['url_type'] = trans_type
        dict1['acc_list'] = acc_list
        return HttpResponse(render_to_string('select_account.html', dict1))


@csrf_exempt
def check_account_page(request):
    dict1 = json.loads(apis.check_account_api(request.session['curr_usr']))
    return HttpResponse(render_to_string('check_account.html', {'d': dict1}))


@csrf_exempt
def create_acc_result_page(request):
    dict1 = {'acc_pwd': acc.password, 'acc_number': acc.account_number}
    return HttpResponse(render_to_string('create_acc_result.html', dict1))


@csrf_exempt
def create_acc_action(request):
    global acc
    if request.method == 'POST':
        acc = Account()
        acc.password = request.POST.get('accPassword')
        acc.user_id = request.session['curr_usr']
        acc.save()
        return redirect(create_acc_result_page)


@csrf_exempt
def dep_or_with_result_page(request):
    dict1 = {}
    global acc  # 전역변수 Account 인스턴스 acc 수정가능하게 함
    if request.method == 'POST':
        # balance는 db에서 잔고값을 가젹오고 amount는 deposit/withdraw 페이지에서 받은 거래금액 저장
        balance = int(Account.objects.values_list('balance', flat=True).get(account_number=request.session['acc_info']))
        try:        # 거래 금액이 정수로 들어오지 않았을 경우 예외처리
            amount = int(request.POST.get('amount'))
        except ValueError:
            return redirect(error_page)
        else:
            commission = 0
            if amount <= 0:  # 거래금액이 0 이하일 경우 예외처리
                return redirect(error_page)
            else:
                # acc에 계좌번호가 세션에서 가져온 acc_info와 같은 쿼리셋을 저장(SELECT * WHERE acc_number=acc_info)
                acc = Account.objects.get(account_number=request.session['acc_info'])
                if url_type == 'deposit':
                    balance = balance + amount - commission
                    dict1['url_type'] = '입금'
                else:
                    if balance < amount + commission:  # 출금시 거래금액이 잔고보다 클 경우 예외처리
                        return redirect(error_page)
                    else:
                        balance = balance - amount - commission
                        dict1['url_type'] = '출금'

                acc.balance = balance  # select한 데이터의 balance 값에 이 메소드 내의 지역변수 balance를 UPDATE 한다
                acc.save()  # UPDATE한 값을 저장한다

                dict1['acc_number'] = request.session['acc_info']
                dict1['amount'] = amount
                dict1['balance'] = balance
                dict1['commission'] = commission
                return HttpResponse(render_to_string('dep_or_with_result.html', dict1))


@csrf_exempt
def error_page(request):
    return HttpResponse(render_to_string('error_page.html'))


@csrf_exempt
def send_money_page(request):
    dict1 = {}
    acc_num = request.session['acc_info']
    dict1['acc_number'] = acc_num
    dict1['balance'] = Account.objects.values_list('balance', flat=True).get(account_number=acc_num)
    return HttpResponse(render_to_string('send_money.html', dict1))


@csrf_exempt
def send_money_result_page(request):
    global acc
    dict1 = {'commission': 0}
    commission = 0
    try:
        Account.objects.get(account_number=request.POST.get('object_account'))
    except Account.DoesNotExist:
        return redirect(error_page)
    except ValueError:
        return redirect(error_page)
    else:
        if request.method == 'POST':
            acc_num = request.session['acc_info']
            dict1['acc_number'] = acc_num
            obj_account = request.POST.get('object_account')
            dict1['obj_account'] = obj_account
            try:  # 거래 금액이 정수로 들어오지 않았을 경우 예외처리
                amount = int(request.POST.get('amount'))
            except ValueError:
                return redirect(error_page)
            else:
                if amount <= 0:  # 거래 금액이 0 이하일 경우 예외처리
                    return redirect(error_page)
                else:
                    dict1['amount'] = amount

                    acc = Account.objects.get(account_number=acc_num)

                    if int(acc.balance) < amount + commission:  # 거래 금액보다 잔고가 적을 경우 예외처리
                        return redirect(error_page)
                    else:
                        acc.balance = int(acc.balance) - amount - commission
                        acc.save()
                        dict1['balance'] = acc.balance

                        acc = Account.objects.get(account_number=obj_account)
                        acc.balance = int(acc.balance) + amount
                        acc.save()

                        return HttpResponse(render_to_string('send_money_result.html', dict1))


@csrf_exempt
def logout_action(request):
    global cust
    request.session.flush()
    cust = ""
    return redirect(main_page)


@csrf_exempt
def account_login_action(request):
    global acc_info
    if request.method == 'POST':
        try:
            acc_number = int(request.POST.get('accNumber'))
            acc_pwd = request.POST.get('accPassword')
            # 입력값과 같은 값을 가지는 데이터를 Account 테이블에서 검색하여 변수에 저장
            acc_info = Account.objects.values_list('account_number', flat=True)
            acc_info = acc_info.get(account_number=acc_number, password=acc_pwd)
            request.session['acc_info'] = acc_info  # 세션에 계좌번호를 가진 값을 저장
        except Account.DoesNotExist as e:  # queryset의 get 메소드 때문에 생기는 예외를 처리해줌
            return redirect(error_page)
        else:
            global url_type
            url_type = request.POST.get('type')
            redirect_url = '/' + request.POST.get('type') + '/'
            return redirect(redirect_url)


def error_number(error_type):
    if error_type == 'DoesNotExist':
        return '001'
    else:
        return '000'


