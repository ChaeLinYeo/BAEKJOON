N = int(input())
num = list(map(int, input().split()))
M = int(input())

low = 0
high = max(num)

result = 0

while low <= high:
    mid = (low+high)//2
    total = 0
    for i in num: 
        if i >= mid: 
            total += mid 
        else: 
            total += i 
    if total > M: 
        high = mid - 1
    else: 
        low = mid + 1
        if result < mid:
            result = mid
print(result)