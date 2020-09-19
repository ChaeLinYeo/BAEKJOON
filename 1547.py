m = int(input())
cup = [0,1,0,0]
for i in range(m):
    x,y = map(int, input().split())
    temp = cup[x]
    cup[x] = cup[y]
    cup[y] = temp
print(cup.index(1))
#index(x) 함수는 리스트에 x 값이 있으면 x의 위치 값을 돌려준다.