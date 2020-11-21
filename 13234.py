wordlist = list(map(str, input().split()))
if wordlist[1]=="AND":
    if wordlist[0]=="true" and wordlist[2]=="true":
        print("true")
    else:
        print("false")
elif wordlist[1]=="OR":
    if wordlist[0]=="false" and wordlist[2]=="false":
        print("false")
    else:
        print("true")