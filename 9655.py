import random
N = int(input())
SK = 0
CY = 0
turn = True #SK
choice = 0
while(N >= 0):
    if N == 0 :
        if turn == False : print("SK")
        else : print("CY")
        break
    if N >= 3 :
        choice = 3
        if turn == True:
            SK += choice
        else:
            CY += choice
        N -= choice
    else :
        choice = 1
        if turn == True:
            SK += choice
        else:
            CY += choice
        N -= choice
    choice = 0
    turn = not turn