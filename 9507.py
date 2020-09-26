t = int(input())
def koong(n):
    temp=[1,1,2,4]
    for i in range(4,n+1):
        temp.append(temp[i-1]+temp[i-2]+temp[i-3]+temp[i-4])
    print(temp[n])

for i in range(t):
    n = int(input())
    koong(n)