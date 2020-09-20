import copy
N = list(map(int, input().split()))
cnt = 0
newN = copy.deepcopy(N)
newN.sort()
for i in range(len(N)):
    if N[i] != newN[i]:
        cnt = 1
if cnt != 0 : print("Bad")
else : print("Good")