from django.http import HttpResponse

# Create your views here.
from django.template.loader import render_to_string
from django.views.decorators.csrf import csrf_exempt


@csrf_exempt
def signup_data(request):
    dict1 = {}
    if request.method == 'POST':
        name = request.POST.get('name')
        uid = request.POST.get('user_id')
        pwd = request.POST.get('password')
        dob = request.POST.get('date_of_birth')
        dict1 = {'name': name,
                 'user_id': uid,
                 'password': pwd,
                 'date_of_birth': dob}

    html = render_to_string('signup_result.html', dict1)
    return HttpResponse(html)


@csrf_exempt
def signup(request):
    return HttpResponse(render_to_string('signup.html'))


def main_page(request):
    return HttpResponse(render_to_string('main.html'))


@csrf_exempt
def login_page(request):
    return HttpResponse(render_to_string('login.html'))


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
