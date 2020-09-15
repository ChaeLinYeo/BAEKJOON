def solution(ball, order):
    answer = []
    return answer

if __name__ == "__main__":
    ball_list = list(input())
    order_list = list(input())
    arr1 = ball_list[1:len(ball_list)-1]
    arr2 = order_list[1:len(order_list)-1]
    ball =[]
    order =[]
    for i in range (len(arr1)):
        ball.append(arr1[3*i])
        order.append(arr2[3*i])
    ball = list(map(int, ball))
    order = list(map(int, order))
    print(ball)
    print(order)
    solution(ball, order)