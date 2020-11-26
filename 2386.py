while(True):
    input_s = list(map(str,input().split()))
    num = 0
    if input_s[0] == "#":break
    word = input_s[0]
    word = word.lower()
    string = (''.join(input_s[1:]))
    string = string.lower()
    for i in range(len(string)):
        if word == string[i]:
            num += 1
    print(word, num)