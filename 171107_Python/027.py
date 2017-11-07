# 027 입력 값 검증
# 이름과 성, 사번, 우편번호를 입력 받은 다음,
# 다음과 같은 규칙에 맞는지를 점검하는 프로그램 만들자.
# 이름은 반드시 넣어야 한다.
# 성은 반드시 넣어야 한다.
# 이름과 성은 최소한 두 글자 이상이어야 한다.
# 사번은 AA-1234의 형태가 되어야 한다.
# 즉, 두 글자의 알파벳, 하이픈, 4자리 숫자로 구성
# 우편번호는 반드시 숫자여야한다.
# 잘못 된 데이터가 입력되면 에러메시지 출력


def val_first_name(first_name):
    if len(first_name) >= 2:
        return True
    else:
        return False


def val_last_name(last_name):
    if len(last_name) >= 2:
        return True
    else:
        return False


def val_emp_num(emp_num):
    if len(emp_num) == 7:
        if emp_num[0].isalpha() and emp_num[1].isalpha() and emp_num[2] == "-":
            if emp_num[3].isdecimal() and emp_num[4].isdecimal() and emp_num[5].isdecimal() and emp_num[6].isdecimal():
                return True
            else:
                return False
        else:
            return False
    else:
        return False


def val_zip_code(zip_code):
    if zip_code.isnumeric():
        return True
    else:
        return False


fName = input("Enter the first name: ")
lName = input("Enter the second name: ")
empNum = input("Enter the employee number: ")
zipCode = input("Enter the zip code: ")

if not val_first_name(fName):
    print("The first name is not long enough.")
if not val_last_name(lName):
    print("The last name is not long enough.")
if not val_emp_num(empNum):
    print("The employee number is not valid.")
if not val_zip_code(zipCode):
    print("The zip code is not valid.")

if val_first_name(fName) and val_last_name(lName) and val_emp_num(empNum) and val_zip_code(zipCode):
    print("All information are valid.")
