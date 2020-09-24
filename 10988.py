word = list(input())
pallindrome = 0
left = 0
right = len(word)-1
for i in range(int(len(word)/2)):
    l = word[left]
    r = word[right]
    if l==r : pallindrome+=1
    left+=1
    right-=1
if pallindrome == len(word)//2:print(1)
else:print(0)