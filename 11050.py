# 이항계수 : N!/(K!(N-K)!)
N,K=map(int, input().split())
def fac(n):
    if n==0 or n==1 : return 1
    return n*fac(n-1)
print(fac(N)//(fac(K)*fac(N-K)))