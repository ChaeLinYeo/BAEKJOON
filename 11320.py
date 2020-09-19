T = int(input())
for i in range (T):
    A, B = map(int, input().split())
    A *= A
    B *= B
    if(A%B == 0): print(A//B)
    elif(A%B != 0): print(A//B+1)