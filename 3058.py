T = int(input())
for _ in range(T):  #변수 _가 T값을 가지고 반복을 수행한다. 실제로 쓰이는 변수가 아니므로 _로 처리
    num = list(map(int, input().split()))
    even_num = []
    for i in num:
        if(i%2 == 0):
            even_num.append(i)
    print(sum(even_num), min(even_num))
