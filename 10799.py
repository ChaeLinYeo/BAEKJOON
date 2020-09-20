bar = list(input())
answer = 0
stack = []
for i in range(len(bar)):
    if bar[i] == '(':   #여는 괄호를 받으면
        stack.append('(')   #스택에 추가한다.
    else:   #bar[i] == ')' 닫는 괄호를 받으면
        if bar[i-1] == '(': #닫는 괄호 이전이 여는 괄호였으면
            stack.pop() #스택에서 팝하고
            answer += len(stack)    # 스택에 저장되어있던 쇠막대기의 왼쪽 끝들'(' 수만큼 더해준다.
            # ()는 레이저로 잘랐다는 뜻이므로, 이전에 스택에 쌓여있던 쇠막대기 '('들은
            # 잘려서 출력되게 되기 때문이다.
        else:   # 닫는 괄호 이전이 닫는 괄호였으면
            stack.pop() #스택에서 팝하고
            answer += 1 # 끄트머리 막대기 부분을 더해준다. 
print(answer)