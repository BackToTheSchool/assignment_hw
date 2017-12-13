from django.http import HttpResponse
# Create your views here.
from django.template.loader import render_to_string
from django.views.decorators.csrf import csrf_exempt
from django.db.models import Manager

from ATM.models import Customer

cust = Customer()


@csrf_exempt
def signup_data(request):
    dict1 = {}
    if request.method == 'POST':
        name = request.POST.get('name')
        uid = request.POST.get('user_id')
        pwd = request.POST.get('password')
        dob = request.POST.get('date_of_birth')
        dict1 = {'name': name,  # 데이터를 딕셔너리에 대입
                 'user_id': uid,
                 'password': pwd,
                 'date_of_birth': dob}

        # cust 객체의 멤버 변수들에게 입력받은 각각의 데이터들 할당
        cust.name = name
        cust.user_id = uid
        cust.password = pwd
        cust.date_of_birth = dob
        cust.save()  # 입력받은 값들을 저장 -> 이거 안하면 db에 저장 안 됨***

    html = render_to_string('signup_result.html', dict1)  # 다음 페이지로 전달
    return HttpResponse(html)


@csrf_exempt
def signup_page(request):
    return HttpResponse(render_to_string('signup.html'))


def main_page(request):
    return HttpResponse(render_to_string('main.html'))


@csrf_exempt
def login_page(request):
    return HttpResponse(render_to_string('login.html'))


@csrf_exempt
def login_action(request):
    if request.method == 'POST':
        uid_input = request.POST.get('UserId')
        pwd_input = request.POST.get('Password')
        uid = Customer.objects.filter(user_id=uid_input)
        pwd = Customer.objects.filter(password=pwd_input)
        return HttpResponse(pwd)
    else:
        return main_page


@csrf_exempt
def create_acc_page(request):
    return HttpResponse(render_to_string('create_acc.html'))


@csrf_exempt
def dep_or_with_page(request):
    return HttpResponse(render_to_string('dep_or_with.html'))


@csrf_exempt
def select_account_page(request):
    return HttpResponse(render_to_string('select_account.html'))


@csrf_exempt
def check_account_page(request):
    return HttpResponse(render_to_string('check_account.html'))


@csrf_exempt
def create_acc_result_page(request):
    return HttpResponse(render_to_string('create_acc_result.html'))


@csrf_exempt
def dep_or_with_result_page(request):
    return HttpResponse(render_to_string('dep_or_with_result.html'))


@csrf_exempt
def error_page(request):
    return HttpResponse(render_to_string('error_page.html'))


@csrf_exempt
def send_money_page(request):
    return HttpResponse(render_to_string('send_money.html'))


@csrf_exempt
def send_money_result_page(request):
    return HttpResponse(render_to_string('send_money_result.html'))


@csrf_exempt
def select_action_page(request):
    return HttpResponse(render_to_string('select_action.html'))
