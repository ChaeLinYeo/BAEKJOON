# M이상 N이하의 소수를 모두 출력
# 에라스토네스의 체
# 시간을 줄이기 위해 i의 제곱근까지 확인하면 된다.
import math
def isPrime(num):
    if num == 1:
        return False
    n = int(math.sqrt(num))
    for i in range(2, n+1):
        if num%i==0:
            return False
    return True
m,n = map(int, input().split())
for i in range(m,n+1):
    if isPrime(i):
        print(i)