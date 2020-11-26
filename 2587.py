sum=0
n=[0]*5
for i in range(5):
    n[i] = int(input())
    sum += n[i]
n.sort()
print(sum//5)
print(n[2])