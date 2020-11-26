string = input()
lst = [str(i) for i in string]
iter = len(lst)
for j in range(iter):
    if lst[j] == "C" or lst[j] == "A" or lst[j] == "M" or lst[j] == "B" or lst[j] == "R" or lst[j] == "I" or lst[j] == "D" or lst[j] == "G" or lst[j] == "E":
        lst[j] = ""
print(''.join(lst))