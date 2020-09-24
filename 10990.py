n = int(input())
for i in range(0,n):
    if i==0:
        print(" "*(n-i-1), "*", sep='')
    else:print(" "*(n-i-1), "*", " "*(i*2-1), "*", sep='')