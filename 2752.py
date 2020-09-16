num = list(map(int, input().split()))

for i in range(3):
    for j in range(3):
        if(num[i]<=num[j]):
            temp=num[i]
            num[i]=num[j]
            num[j]=temp

print(num[0],num[1],num[2])