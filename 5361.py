T = int(input())
for i in range(T):
    A,B,C,D,E = map(float, input().split())
    result = A*350.34 + B*230.90 + C*190.55 + D*125.30 + E*180.90
    print('$%.2f'%result)