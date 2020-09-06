A,B,C = input().split()
A = int(A)
B = int(B)
C = int(C)
# 정인이는 공책에 숫자 세개로 이루어진 등식을 적어주었다. 
# (식은 자연수와 등호(=), 그리고 더하기, 빼기, 곱하기, 나누기 기호(+-*/)로 이루어져 있다)
#형태는 다음과 같을 것이다 A + B = C / A = B + C 이런식으로!
if(A+B == C) : print('{}{}{}={}'.format(A,'+',B,C)) #파이썬에서 공백 없이 문자열과 숫자를 섞어서 출력하는 방법
elif(A-B == C) : print('{}{}{}={}'.format(A,'-',B,C))
elif(A*B == C) : print('{}{}{}={}'.format(A,'*',B,C))
elif(A//B == C) : print('{}{}{}={}'.format(A,'/',B,C))
elif(B+C == A) : print('{}={}{}{}'.format(A,B,'+',C))
elif(B-C == A) : print('{}={}{}{}'.format(A,B,'-',C))
elif(B*C == A) : print('{}={}{}{}'.format(A,B,'*',C))
elif(B//C == A) : print('{}={}{}{}'.format(A,B,'/',C))