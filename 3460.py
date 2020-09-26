T = int(input())
for i in range(T):
    n = int(input())
    num = [0]*n
    j=0
    while(True):
        if n==1 or n==0:
            num[j]=n
            break
        num[j] = n%2
        n = n//2
        j+=1
    for k in range(len(num)):
        if num[k]==1:print(k,end=" ")