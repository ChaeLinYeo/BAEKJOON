N = list(map(int, input().split()))
cnt = 0
for i in range(len(N)):
    if N[i] > 0:cnt+=1
print(cnt)