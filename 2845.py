L, P = map(int, input().split())    #1m^2당 사람의 수 L, 파티가 열렸던 곳의 넓이 P
news = list(map(int, input().split()))
asw = [0 for i in range(5)] #배열의 길이 지정 후 0으로 초기화
for i in range (5):
    news[i] = news[i] - (L*P)
print(news[0], news[1], news[2], news[3], news[4])