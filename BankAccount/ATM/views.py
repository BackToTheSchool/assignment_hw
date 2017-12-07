from django import forms
from django.http import HttpResponse, request, HttpResponseRedirect

# Create your views here.
from django.shortcuts import render_to_response
from django.template import loader
from django.template.loader import get_template, render_to_string
from django.views.decorators.csrf import csrf_exempt


@csrf_exempt
def hello(request):
    return HttpResponse("Hello World!")


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
