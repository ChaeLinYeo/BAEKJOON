A, B = map(str, input().split())
Alist = [int(i) for i in A]
Blist = [int(j) for j in B]
for a in range(len(Alist)):#최솟값 만들기
    if Alist[a] == 6:
        Alist[a] = 5
for b in range(len(Blist)):#최솟값 만들기
    if Blist[b] == 6:
        Blist[b] = 5
Amin = int(''.join([str(_) for _ in Alist]))
Bmin = int(''.join([str(_) for _ in Blist]))
min = Amin+Bmin
for c in range(len(Alist)):#최대값 만들기
    if Alist[c] == 5:
        Alist[c] = 6
for d in range(len(Blist)):#최대값 만들기
    if Blist[d] == 5:
        Blist[d] = 6
Amax = int(''.join([str(_) for _ in Alist]))
Bmax = int(''.join([str(_) for _ in Blist]))
max = Amax+Bmax
print(min, max)