T = int(input())    # 학기 수
sum = 0
csum = 0
for i in range(T):
    N = int(input())    # 학기별 수강한 과목 수
    for i in range(N):
        C, G = input().split()    # N개 과목들의 학점 C와 성적 G
        C = int(C)
        G = float(G)
        sum += C*G
        csum += C
    print(csum, round(sum/csum, 1))   # 소수점을 1번째 까지만 표현하고 반올림
    sum = 0
    csum = 0