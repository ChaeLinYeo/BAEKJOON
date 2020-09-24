import copy
n = list(map(int, input().split()))
asnum = 0
desnum = 0
mixnum = 0
ascending = copy.copy(n)
ascending.sort()
descending = copy.copy(n)
descending.sort(reverse=True)
for i in range(len(n)):
    if n[i] == ascending[i]:
        asnum += 1
    elif n[i] == descending[i]:
        desnum += 1
    mixnum += 1
if asnum == 8 : print("ascending")
elif desnum == 8 : print("descending")
elif mixnum == 8 : print("mixed")