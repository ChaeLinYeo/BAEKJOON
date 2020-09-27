import collections
N = int(input())
chair = list(map(int, input().split()))
count = [0]*101
result=0
for num in chair:
	if count[num]==0:	#자리가 비어있으면
		count[num]=1
	else:	#자리가 이미 차있으면
		result+=1
print(result)