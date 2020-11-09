N = int(input())
Nnum = input()
Nnum = list(map(int, Nnum.split(" ")))
M = int(input())
Mnum = input()
Mnum = list(map(int, Mnum.split(" ")))

Nnum.sort()

left = 0
right = N-1

for i in Mnum:
    while (left <= right):
        mid = (left+right)//2
        if (Nnum[mid] == i):
            print(1)
            break
        elif (Nnum[mid] < i):
            left = mid + 1
        else:
            right = mid - 1
        if left > right:
            print(0)
            break
    left = 0
    right = N-1