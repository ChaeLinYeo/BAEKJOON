T = int(input())
sum = 0
for i in range(T):
    num = list(map(int, input().split()))
    for i in range(len(num)):
        sum += num[i]
    print(sum)
    sum=0