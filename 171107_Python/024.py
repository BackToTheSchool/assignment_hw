# 024 에너그램 점검
# 두 개의 문자열을 비교하여 서로가 애너그램인지를
# 검사하는 프로그램을 작성하라.
# 프로그램은 두 개의 문자열을 입력 받은 후
# 다음의 출력 예 같이 출력해야 한다.

# Example
# Enter two strings and I'll tell you if they are anagrams:
# Enter the first string: note
# Enter the second string: tone
# "note" and "tone" are anagrams.


def is_anagram(first, second):
    f_out = [0 for _ in range(len(first))]
    s_out = [0 for _ in range(len(second))]

    for i in range(0, len(first)):          # 문자열인 first와 second는 바로 sort()를 할 수 없으므로
        f_out[i] = first[i]                 # 일반 배열으로 옮겨서 sort()를 사용해서 결과값을 비교한다

    for i in range(0, len(second)):
        s_out[i] = second[i]

    f_out.sort()
    s_out.sort()

    if f_out.__eq__(s_out):
        return True
    else:
        return False


print("Enter two strings and I'll tell you if they are anagrams: ")
fString = input("Enter the first string: ")
sString = input("Enter the second string: ")

if is_anagram(fString, sString):
    print(fString, "and", sString, "are anagram")
else:
    print(fString, "and", sString, "are not anagram")



