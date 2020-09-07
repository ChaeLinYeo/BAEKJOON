N = int(input())
iszero = 0
isone = 0
for i in range (N):
    opinion = int(input())
    if(opinion == 0):iszero+=1
    elif(opinion == 1):isone+=1
if(iszero > isone):print("Junhee is not cute!") #0이 더 많으면 준희는 귀엽지 않다
elif(iszero < isone):print("Junhee is cute!")   #1이 더 많으면 준희는 귀엽다