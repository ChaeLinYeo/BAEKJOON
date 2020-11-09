import sys
input = sys.stdin.readline

N = int(input())
Nlist = list(map(int, input().split()))
Nlist.sort()
M = int(input())
Mlist = list(map(int, input().split()))

def binary_search(left, right):
    while(left <= right):
        mid = (left+right)//2
        if(Nlist[mid] == i):
            return 1
        elif(Nlist[mid] > i):
            right = mid - 1
        else:
            left = mid + 1
    return 0

for i in Mlist:
    print(binary_search(0, N-1), end=' ')