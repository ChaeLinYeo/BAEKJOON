L = int(input())
for i in range(L):
    num, sign = map(str, input().split())
    num = int(num)
    print(sign*num)