T = int(input())
for i in range(T):
    N, C = map(int, input().split())# 철수가 가진 쿠키의 개수 N과 날마다 먹는 쿠키의 개수 C
    if N%C == 0 : print(N//C)
    elif N%C != 0 : print(N//C+1)