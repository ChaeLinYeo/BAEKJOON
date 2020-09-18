T = int(input())
for i in range(T):
    c,b = map(int, input().split())
    print("You get ",c//b," piece(s) and your dad gets ",c%b," piece(s).",sep='')