n, m = map(int, input().split())

number_list = [1 + i for i in range(n)]   # 숫자 리스트
array = []                                # 출력할 수열
 
def DFS(x, idx):
    if x == m:                            # 수열 m개를 충족할경우 출력
        print(*array)            
        return
            
    for i in range(idx,n):
        array.append(number_list[i])      # 수열 추가
        DFS(x + 1, i)                        # + 1번째 수열을 위해 재귀함수 호출
        array.pop()                       # 수열 마지막 자리 삭제
DFS(0, 0)