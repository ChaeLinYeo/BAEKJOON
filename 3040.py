nine = [0]*9
answer = False

for i in range(9):
    nine[i] = int(input())

for i in range(9):
    if answer == True:
        break
    for j in range(i+1,9):
        if sum(nine)-nine[i]-nine[j] == 100:
            nine.pop(i)
            nine.pop(j-1)
            nine.sort()
            for i in range(7):
                print(nine[i])
            answer = True
            break