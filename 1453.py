N = int(input())	#손님 수
chair = list(map(int, input().split()))	#손님이 원하는 자리
count = [0]*101	#피씨방 전체 자리
result=0
for num in chair:
	if count[num]==0:	#자리가 비어있으면
		count[num]=1
	else:	#자리가 이미 차있으면
		result+=1
print(result)