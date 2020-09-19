#(꼭짓점의 수) - (모서리의 수) + (면의 수) = 2
#면의 수 = 2 - 꼭짓점의 수 + 모서리의 수
#V = 꼭짓점의 수
#E = 모서리의 수
T = int(input())
for i in range(T):
    V,E = map(int, input().split())
    print(2-V+E)