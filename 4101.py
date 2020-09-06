# 두 양의 정수가 주어졌을 때, 첫 번째 수가 두 번째 수보다 큰지 구하는 프로그램
while True:
    A, B = input().split()
    A = int(A)
    B = int(B)
    if A == 0 and B == 0 : break
    if A <= B : print("No")
    else : print("Yes")