N = list(map(int, input()))
N.sort(reverse=True)
print(''.join(str(i) for i in N))
#''.join(list)를 사용하여 리스트에서 문자열로 변환.