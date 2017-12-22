"""BankAccount URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/1.11/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  url(r'^$', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  url(r'^$', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.conf.urls import url, include
    2. Add a URL to urlpatterns:  url(r'^blog/', include('blog.urls'))
"""
from django.conf.urls import url, include
from django.contrib import admin

from ATM import views

urlpatterns = [
    url(r'^admin/', admin.site.urls),
    url(r'^signup/', views.signup_page),
    url(r'^signup_result/', views.signup_data),
    url(r'^main/', views.main_page),
    url(r'^$', views.main_page),
    url(r'^login/', views.login_page),
    url(r'^login_action_page/', views.login_action_page),
    url(r'^select_action/', views.select_action_page),
    url(r'^create_acc/', views.create_acc_page),
    url(r'^create_acc_action/', views.create_acc_action),
    url(r'^deposit/', views.deposit_page),
    url(r'^withdraw/', views.withdraw_page),
    url(r'^select_account/', views.select_account_page),
    url(r'^check_account/', views.check_account_page),
    url(r'^create_acc_result/', views.create_acc_result_page),
    url(r'^dep_or_with_result/', views.dep_or_with_result_page),
    url(r'^error/', views.error_page),
    url(r'^send_money/', views.send_money_page),
    url(r'^send_money_result/', views.send_money_result_page),

]