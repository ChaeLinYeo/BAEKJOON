#count 함수를 사용하면 원하는 str에 원하는 문자가 몇 개 들어있는지 쉽게 확인할 수 있다.

n,d = map(int, input().split())
cnt = 0
for i in range(1,n+1):
    cnt += str(i).count(str(d))
print(cnt)