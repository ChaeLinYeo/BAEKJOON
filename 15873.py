#A,B는 10 이하의 자연수이다!!
n = int(input())
if(100 > n) : print(n//10 + n%10)    #입력받은 수가 100보다 작으면, A는 10으로 나눈 몫이고 B는 그 나머지이다.
elif(n % 10 == 0) : print(n//100 + 10)   #입력받은 수가 10으로 나누어 떨어진다면, A는 100으로 나눈 몫이고 B는 최대 10까지 가능하므로, 10으로 나누어 떨어지는 수의 B는 무조건 10일 수밖에 없다.
else : print(n%100 + 10)    #입력받은 수가 100보다 크고 10으로 나누어 떨어지지 않는다면, 그것은 B가 무조건 10이라는 뜻이다. 110,210,이렇게.