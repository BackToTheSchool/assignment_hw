# 025 암호 길이 점검
# 주어진 암호의 복잡도를 결정하는 프로그램을 작성하라.
# 복잡도는 다음과 같은 규칙으로 정한다.
# 아주 약한 암호는 숫자로만 구성, 길이도 8자 미만
# 약한 암호는 영문자로만 구성 길이도 8자 미만
# 강한 암호는 영문자 한 개 이상의 숫자, 8자 이상
# 아주 강한 암호는 영문자, 숫자, 특수문자로 구성 8이상

# Example
# The password '12345' is a very weak password
# The password 'abcdef' is a weak password
# The password 'abc123xyz' is a strong password
# The password '1337h@xor' is a very strong password

passInput = input("Enter a password: ")

alphaCount = 0
numCount = 0
spCount = 0

for i in range(0, len(passInput)):
    if passInput[i].isalpha():
        alphaCount += 1
    elif passInput[i].isdecimal():
        numCount += 1
    else:
        spCount += 1

if alphaCount >= 1 and numCount >= 1 and spCount >= 1 and len(passInput) >= 8:
    print("The password \'%s\' is a very strong password" % passInput)
elif alphaCount >= 1 and len(passInput) >= 8:
    print("The password \'%s\' is a strong password" % passInput)
elif numCount == 0 and spCount == 0 and len(passInput) < 8:
    print("The password \'%s\' is a weak password" % passInput)
elif alphaCount == 0 and spCount == 0 and len(passInput) < 8:
    print("The password \'%s\' is a very weak password" % passInput)
else:
    print("The password \'%s\' is a strange password" % passInput)
