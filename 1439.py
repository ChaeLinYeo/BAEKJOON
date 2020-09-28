#S에서 연속된 하나 이상의 숫자를 잡고 모두 뒤집는 것이다. 
#뒤집는 것은 1을 0으로, 0을 1로 바꾸는 것을 의미한다.
S = list(input())
one=0	#연속된 1의 덩어리 개수
zero=0	#연속된 0의 덩어리 개수
for i in range(0,len(S)-1):
	if S[i]=='0' and S[i+1]!='0':
		zero+=1
	elif S[i]=='1' and S[i+1]!='1':
		one+=1
if S[len(S)-1]=='1':one+=1
elif S[len(S)-1]=='0':zero+=1
if one>zero:
	print(zero)
else:
	print(one)