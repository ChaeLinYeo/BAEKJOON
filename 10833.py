N = int(input())
cnt = 0
for i in range(N):
    student, apple = map(int, input().split())
    if(apple//student >= 0):
        cnt += apple%student
    else:
        cnt += apple
print(cnt)