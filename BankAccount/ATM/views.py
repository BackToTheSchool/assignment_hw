from typing import Dict

from django import forms
from django.http import HttpResponse, request, HttpResponseRedirect

# Create your views here.
from django.shortcuts import render_to_response
from django.template.loader import get_template, render_to_string
from django.views.decorators.csrf import csrf_exempt


@csrf_exempt
def hello(request):
    return HttpResponse("Hello World!")


@csrf_exempt
def signup_data(request):
    dict1 = {'name': request.POST.get('name')}
    dict1.update({'user_id': request.POST.get('user_id')})
    dict1.update({'password': request.POST.get('password')})
    dict1.update({'date_of_birth': request.POST.get('date_of_birth')})

    html = render_to_string('signup_result.html', dict1)
    return HttpResponse(html)


@csrf_exempt
def signup(request):
    return HttpResponse(render_to_string('signup.html'))


@csrf_exempt
class DataSignUp(forms.Form):
    name = forms.CharField
    uid = forms.CharField
    pwd = forms.PasswordInput
    dob = forms.DateInput


@csrf_exempt
def data_pass(request):
    if request.method == 'POST':  # 폼이 제출되었을 경우...
        form = DataSignUp(request.POST)  # 폼은 POST 데이터에 바인드됨
        if form.is_valid():  # 모든 유효성 검증 규칙을 통과
            name = request.POST.get('name')
            uid = form.cleaned_data['uid']
            pwd = form.cleaned_data['pwd']
            dob = form.cleaned_data['dob']

            return HttpResponseRedirect('/signup_result/')  # Redirect after POST
    else:
        form = DataSignUp()  # An unbound form

    return render_to_response('signup_result.html', {
        'form': form,
    })
