N = int(input())    #약수들 개수
numlist = list(map(int, input().split()))   #약수들 입력
numlist.sort()   #약수들 정렬
print(numlist[0]*numlist[N-1])  #정렬한 약수의 처음과 끝 곱하기