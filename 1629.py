# 시간초과를 피하기 위해 분할정복을 해야됨.
# A^50 = A^(25*2) : B가 짝수일때
# A^51 = A^(25*2+1) = A^(25*2)*A : B가 홀수일때
A,B,C = map(int,input().split())
def divide(A,B):
	if B==1:
		return (A%C)
	elif B==2:
		return ((A*A)%C)
	else:
		temp = divide(A, B//2)
		if B%2 == 0:	# B가 짝수이면
			return ((temp*temp)%C)
		else:	# B가 홀수이면
			return ((temp*temp*A)%C)
print(divide(A,B))