N = int(input())
num = list(map(int, input().split()))
answer = []
for i in num:
    if i not in answer:
        answer.append(i)
answer.sort()
print(' '.join(map(str,answer)))
# 리스트를 문자열로 변환하여 출력
# int형 리스트를 join하여 공백 구분으로 출력