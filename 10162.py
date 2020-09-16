# A = 5분 = 300초
# B = 1분 = 60초
# C = 10초
A=0
B=0
C=0
time = int(input()) #초단위 입력
A = time//300
time -= A*300
B = time//60
time -= B*60
C = time//10
time -= C*10
if(time == 0):
    print(A,B,C)
elif(time != 0):
    print(-1)