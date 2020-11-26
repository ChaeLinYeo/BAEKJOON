T = int(input())
for _ in range(T):
    count={}
    sum = 0
    X = input()
    X = str(X)
    lst = [int(i) for i in X]
    if len(lst)==1:
        print("1")
    else:
        for j in lst:
            try:count[j]+=1
            except:count[j]=1
        # print(count)
        for k in count:
            if count[k] > 1:
                sum += 1
            else:
                sum += count[k]
        print(sum)