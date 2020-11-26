# import sys
# try:
#     while(1):
#         i = sys.stdin.readline()
#         if not(i):
#             break
#         n, k = map(int, i.split())
#         initial = n
#         num = 0
#         while(n>=k):
#             n -= k
#             num += 1
#             n += 1
#         print(num+initial)
# except: exit()
import sys 
for i in sys.stdin.readlines(): 
    n,k=map(int,i.strip().split()) 
    t=0 
    r=0 
    while n>=k: 
        t=n//k 
        r+=k*t 
        n=n%k+t 
    r+=n 
    print(r)
