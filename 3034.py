N, W, H = input().split()
N = int(N)
W = int(W)
H = int(H)
diagonal = (W**2+H**2)**0.5
for i in range(N):
    fire = int(input())
    if(fire <= diagonal) : print("DA")
    else : print("NE")