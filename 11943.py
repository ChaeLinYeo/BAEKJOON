A1,B1 = map(int,input().split())
A2,B2 = map(int,input().split())
if (A1+B2) < (A2+B1):
    print(A1+B2)
else:
    print(A2+B1)