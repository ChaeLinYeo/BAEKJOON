n, T = map(int, input().split())
num = list(map(int, input().split()))
cnt = 0
sum = 0
for i in range(n):
    sum += num[i]
    if(sum > T):
        break
    cnt += 1
print(cnt)