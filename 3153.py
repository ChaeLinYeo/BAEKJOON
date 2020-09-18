while(True): #a,b,c가 오름차순이어야 직각삼각형 판별 가능.
    num = list(map(int, input().split()))
    num.sort()
    a = num[0]
    b = num[1]
    c = num[2]
    if a == b == c == 0 : break
    elif a*a + b*b == c*c:print("right")
    elif a*a + b*b != c*c:print("wrong")