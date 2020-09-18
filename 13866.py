A,B,C,D = map(int, input().split())
max = max(A,B,C,D)
min = min(A,B,C,D)
group1 = max+min
group2 = A+B+C+D - group1
print(abs(group1-group2))