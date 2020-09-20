while(True):
    num = int(input())
    numsum = 0
    cnt = 1
    count = 0
    if(num == -1):break # 종료조건

    for i in range(1, num):#약수 구하기
        if num % i == 0:
            numsum += i
            count += 1
            
    if numsum == num : 
        print(num, "=", end=' ')
        for i in range(1,num):
            if(num%i==0 and cnt!=count):
                print(i,"+", end=' ')
                cnt+=1
            elif(num%i==0 and cnt==count):
               print(i)
    else:
        print(num,"is NOT perfect.")