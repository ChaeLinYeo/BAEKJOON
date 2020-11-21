T = int(input())
yonsei = 0
korea = 0
for i in range(T):
    for j in range(9):
        y_score, k_score = map(int, input().split())
        if y_score > k_score:
            yonsei+=1
        elif y_score < k_score:
            korea+=1
    if yonsei > korea:
        print("Yonsei")
    elif yonsei < korea:
        print("Korea")
    elif yonsei == korea:
        print("Draw")