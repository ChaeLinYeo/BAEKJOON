dish = list(input())
sum=10
for i in range(1,len(dish)):
    if dish[i]=="(":
        if dish[i-1]=="(":
            sum += 5
        elif dish[i-1]==")":
            sum += 10
    if dish[i]==")":
        if dish[i-1]=="(":
            sum += 10
        elif dish[i-1]==")":
            sum += 5
print(sum)