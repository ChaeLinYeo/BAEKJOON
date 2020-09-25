#재귀적으로 피보나치 수열 문제를 풀었을 때 
#f(n)은 f(1)과 f(0)을 각각 몇번씩 호출하게 되는가?
def count_fibonacci(n):
    zero_count = [1,0]
    one_count = [0,1]
    if n<=1 : return zero_count, one_count
    for i in range(2,n+1):
        zero_count.append(zero_count[i-1]+zero_count[i-2])
        one_count.append(one_count[i-1]+one_count[i-2])
    return zero_count, one_count

if __name__ == "__main__":
    T = int(input())
    zero_count, one_count = count_fibonacci(40)
    for i in range(T):
        n = int(input())
        print(zero_count[n], one_count[n])