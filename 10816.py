#시간초과됨!
import sys
input = sys.stdin.readline

N = int(input())
Nlist = list(map(int, input().split()))
M = int(input())
Mlist = list(map(int, input().split()))
copylist = Mlist.copy()
Mlist.sort()

def binary_search(left, right):
    while(left <= right):
        mid = (left+right)//2
        if(Mlist[mid] == i):
            return 1
        elif(Mlist[mid] > i):
            right = mid - 1
        else:
            left = mid + 1
    return 0

answer = [0]*M
for i in Nlist:
    if(binary_search(0, N-1)==1): 
        answer[copylist.index(i)] +=1
print(copylist)
print(answer)
