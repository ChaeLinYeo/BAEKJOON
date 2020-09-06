location = [list(map(int, input().split())) for _ in range(3)]
x1 = location[0][0]
y1 = location[0][1]
x2 = location[1][0]
y2 = location[1][1]
x3 = location[2][0]
y3 = location[2][1]
if(x1 == x2) : x = x3
elif(x2 == x3) : x = x1
elif(x1 == x3) : x = x2
if(y1 == y2) : y = y3
elif(y2 == y3) : y = y1
elif(y1 == y3) : y = y2
print(x,y)