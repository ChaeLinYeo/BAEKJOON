numlist=[0]*10
avgsum=0
max=0
freq=0
for i in range(10):
    numlist[i]=int(input())
    avgsum+=numlist[i]
for j in range(10):
    if max < numlist.count(numlist[j]):
        max = numlist.count(numlist[j])
        freq = numlist[j]
print(avgsum//10)
print(freq)