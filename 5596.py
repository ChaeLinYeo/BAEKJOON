S = list(map(int, input().split()))
T = list(map(int, input().split()))
S_sum = 0
T_sum = 0
for i in range (4):
    S_sum += S[i]
    T_sum += T[i]
if(S_sum > T_sum):print(S_sum)
elif(S_sum < T_sum):print(T_sum)
elif(S_sum == T_sum):print(S_sum)