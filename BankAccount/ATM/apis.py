from django.http import JsonResponse
from django.views.decorators.csrf import csrf_exempt

from ATM.models import Customer, Account

import json


@csrf_exempt
def signup_result_api(name, uid, pwd, dob):
    try:
        dict1 = {"name": name, "user_id": uid, "password": pwd, "date_of_birth": dob}
        # cust 객체의 멤버 변수들에게 입력받은 각각의 데이터들 할당
        cust = Customer()
        cust.name = name
        cust.user_id = uid
        cust.password = pwd
        cust.date_of_birth = dob
        cust.save()  # 입력받은 값들을 저장 -> 이거 안하면 db에 저장 안 됨***'
        cust.__reduce__()  # 다 저장하고 나서 중복되지 않게 flush()
    except ValueError:
        return JsonResponse("error")
    else:
        return json.dumps(dict1)


@csrf_exempt
def check_account_api(user_id):
    dict1 = {}
    acc_list = Account.objects.filter(user_id=user_id)
    # 딕셔너리 dict1에 다 acc_num(key): balance(value) 형식으로 넣기
    for i in acc_list:
        dict1[i.__str__()] = i.balance
    return json.dumps(dict1)


@csrf_exempt
def login_action_api(uid_input, pwd_input):
    try:
        curr_usr = Customer.objects.values_list('user_id', flat=True).get(user_id=uid_input,
                                                                          password=pwd_input)  # 조건과 일치하는 데이터 SELECT
    except Customer.DoesNotExist as e:
        return False
    else:
        return curr_usr
