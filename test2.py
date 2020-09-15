def solution(ball, order):
    answer = []
    hold = []
    num=0
    front=0
    holdnum=0
    back=len(ball)-1
    while(front != back):
        if(ball[front] == order[num]):
            answer.append(order[num])
            front+=1
            num+=1
        elif(ball[back] == order[num]):
            answer.append(order[num])
            back-= 1
            num+=1
        else:
            hold.append(order[num])
            num+=1
            print("hold : ", hold[holdnum])
            if(ball[front] == hold[holdnum]):
                answer.append(hold[holdnum])
                front+=1
                # num+=1
                holdnum+=1
            elif(ball[back] == hold[holdnum]):
                answer.append(hold[holdnum])
                back-= 1
                # num+=1
                holdnum+=1
    return answer

if __name__ == "__main__":
    ball = list(map(int, input().split(',')))
    order = list(map(int, input().split(',')))
    print(solution(ball, order))