N = int(input())
num=0
score=0
for i in range(N):
    subject = list(map(str, input().split()))
    num += int(subject[1])
    if subject[2] == "A+":score+=(4.3*int(subject[1]))
    elif subject[2] == "A0":score+=(4.0*int(subject[1]))
    elif subject[2] == "A-":score+=(3.7*int(subject[1]))
    elif subject[2] == "B+":score+=(3.3*int(subject[1]))
    elif subject[2] == "B0":score+=(3.0*int(subject[1]))
    elif subject[2] == "B-":score+=(2.7*int(subject[1]))
    elif subject[2] == "C+":score+=(2.3*int(subject[1]))
    elif subject[2] == "C0":score+=(2.0*int(subject[1]))
    elif subject[2] == "C-":score+=(1.7*int(subject[1]))
    elif subject[2] == "D+":score+=(1.3*int(subject[1]))
    elif subject[2] == "D0":score+=(1.0*int(subject[1]))
    elif subject[2] == "D-":score+=(0.7*int(subject[1]))
    elif subject[2] == "F":score+=0.0
answer = score/num+0.000000000001#실수의 연산이기에 디버깅을 위해 찍어봐도 3.27500000으로 나오지만 실제로는 3.274999999999......의 값을 갖게 되어
#부동소수점의 표현 방법.
print("{0:.2f}".format(answer))