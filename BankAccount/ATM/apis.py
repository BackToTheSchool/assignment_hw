from django.http import JsonResponse
from django.views.decorators.csrf import csrf_exempt

from ATM.models import Customer

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
        cust.__reduce__()   # 다 저장하고 나서 중복되지 않게 flush()
    except ValueError:
        return JsonResponse("error")
    else:
        return json.dumps(dict1)


# @csrf_exempt
# def check_account_api(acc_num):
