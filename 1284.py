while(True):
	answer=1
	num = ""
	num = input()
	if num == "0":
		break
	else:
		numlist = [int(i) for i in num]
		for j in range(len(numlist)):
			if numlist[j]==1:
				answer+=2
			elif numlist[j]==0:
				answer+=4
			else:
				answer+=3
			answer+=1
	print(answer)
	num = ""
	answer = 1