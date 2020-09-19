# 전투력 = 1 * (HP) + 5 * (MP) + 2 * (공격력) + 2 * (방어력)
T = int(input())
for i in range(T):
    HP, MP, atk, shd, HP1, MP1, atk1, shd1 = map(int, input().split())
   
    if(HP+HP1 < 1): 
        num1 = 1
    else:
        num1 = HP+HP1

    if(MP+MP1 < 1): 
        num2 = 5
    else:
        num2 = 5*(MP+MP1)

    if(atk+atk1 < 0): 
        num3 = 0
    else:
        num3=2*(atk+atk1)

    num4 = 2*(shd+shd1)

    print(num1+num2+num3+num4)