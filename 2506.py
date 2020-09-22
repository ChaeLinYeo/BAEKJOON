N = int(input())
answer = list(map(int, input().split()))
score = [0]*len(answer)
cum = 1
sum = 0
if answer[0]==1 : 
    score[0] += 1
for i in range(1, len(answer)):
    if answer[i] == 1 and answer [i-1] == 1:
        cum += 1
        score[i] += cum
    elif answer[i] == 1 and answer[i-1] == 0:
        cum = 1
        score[i] += 1
for i in range(len(score)):
    sum += score[i]
print(sum)