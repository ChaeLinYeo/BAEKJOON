#r은 광고를 하지 않았을 때 수익, 
#e는 광고를 했을 때의 수익, 
#c는 광고 비용
N = int(input())
for i in range(N):
    r,e,c = map(int, input().split())
    if(r < e-c):print("advertise")
    elif(r == e-c):print("does not matter")
    elif(r > e-c):print("do not advertise")