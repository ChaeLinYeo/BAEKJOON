N = int(input())
student = list(map(int, input().split()))
cnt = 0
for i in range (N):
    if(student[i] != i+1):cnt+=1
print(cnt)