# 003 따옴표 출력
# 인용구와 그 말을 한 사람을 입력 받는 프로그램을 작성하라.
# 인용구와 사람 이름은 다음의 출력 예와 같이 나타내보자.

# Example
# What is the quotes? These aren't the droids you're looking for.
# Who said it? Obi-Wan Kenobi
# Obi-Wan Kenobi says, "These aren't the droids you're looking for."

print('What is the quotes? ')
quote = input()
print('Who said it? ')
speaker = input()

print(speaker, 'says, "', quote, '"')
