K = int(input())    # 반의 수

for i in range(K):
    maxnum = 0
    minnum = 0
    sub = 0
    submax = 0

    Nscore = list(map(int, input().split()))
    N = Nscore[0]
    score = Nscore[1:]

    maxnum = max(score)
    minnum = min(score)

    score.sort(reverse=True)

    for j in range(N-1):
        sub = score[j] - score[j+1]
        if sub > submax:
            submax = sub

    print("Class",i+1)
    print("Max ",maxnum,", Min ",minnum,", Largest gap ",submax,sep='')