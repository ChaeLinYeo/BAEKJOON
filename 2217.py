#가장 작은 무게를 들 수 있는 로프가 들 수 있는 질량 * 병렬 연결 로프 갯수 = 최종 무게
# 위의 규칙에서 1번째 값은 1번만 버틸 수 있고, 2번째 값은 1번과 2번이 버틸 수 있기 때문에 
#아래의 식이 세워진다.
#rope[N] * N번째 자리
N = int(input())
w = [0]*N
for i in range(N):
    w[i] = int(input())
w.sort(reverse=True)
for i in range(N):
    w[i]*=(i+1)
print(max(w))