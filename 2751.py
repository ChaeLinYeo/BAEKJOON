N = int(input())
numlist = []
for i in range(N):
    numlist.append(int(input()))
numlist.sort()
for i in range(N):
    print(numlist[i])
#python3이 아니라 PyPy로 제출해야함!
#그래야 시간초과 안뜸.