A, B = input().split()  #공백 기준으로 구분하여 입력받는다.
A = int(A)  # split으로 분리한 값은 문자열 상태이므로 계산할 때는 다음과 같이 int를 사용하여 정수로 변환하여 다시 저장
B = int(B)
# 연산자의 기호는 ＠으로, A＠B = (A+B)×(A-B)
print((A+B)*(A-B))