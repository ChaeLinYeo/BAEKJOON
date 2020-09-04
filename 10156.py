#과자 한 개의 가격 K, 사려고 하는 과자의 개수 N, 현재 동수가 가진 돈 M
#모자란 돈 출력
K, N, M = input().split()
K = int(K)
N = int(N)
M = int(M)
if(K*N-M > 0) : print(K*N-M)
else : print(0)