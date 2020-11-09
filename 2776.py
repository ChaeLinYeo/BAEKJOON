import sys
input = sys.stdin.readline

def binary_search(left, right, N, M):
    while(left <= right):
        mid = (left+right)//2
        if (Nlist[mid] == j):
            return 1
        elif (Nlist[mid] > j):
            right = mid - 1
        else:
            left = mid + 1
    return 0

T = int(input())    #테스트케이스의 수 

for _ in range(T):
    N = int(input())    #수첩 1에 적은 정수 개수
    Nlist = list(map(int, input().split())) #수첩 1에 적은 정수들
    M = int(input())    #수첩 2에 적은 정수 개수
    Mlist = list(map(int, input().split())) #수첩 2에 적은 정수들
    Nlist.sort()

    for j in Mlist:
        print(binary_search(0,N-1, N, M))