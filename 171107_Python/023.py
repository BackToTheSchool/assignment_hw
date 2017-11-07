# 023 자동차 문제 해결
# 자동차에 대한 문제를 해결하는 프로그램을 작성하라.
# 이를 위해 다음의 의사결정 트리를 이용하라.

# Example
# Is the car silent when you turn the key? y
# Are the battery terminals corroded? n
# The battery cabled may be damaged.
# Replace cables and try again.

yesNo = input("question 1: ")
if yesNo.__eq__("yes"):
    yesNo = input("question 2-1: ")
    if yesNo.__eq__("yes"):
        print("answer 1")
    else:
        print("answer 2")
else:
    yesNo = input("question 2-2: ")
    if yesNo.__eq__("yes"):
        print("answer 3")
    else:
        yesNo = input("question 3: ")
        if yesNo.__eq__("yes"):
            print("answer 4")
        else:
            yesNo = input("question 4: ")
            if yesNo.__eq__("yes"):
                yesNo = input("question 5: ")
                if yesNo.__eq__("yes"):
                    print("answer 5")
                else:
                    print("answer 6")


