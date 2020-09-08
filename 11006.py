for i in range(int(input())): 
    leg, ch = map(int, input().split()) #치킨의 다리 수와 치킨 수
    cc = 2*ch - leg
    print(cc, ch-cc)