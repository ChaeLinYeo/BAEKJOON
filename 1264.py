while(True):
	num=0
	input_string = input()
	input_string = input_string.lower()
	if input_string == "#":break
	else:
		for i in range(len(input_string)):
			if input_string[i]=="a":
				num+=1
			elif input_string[i]=="e":
				num+=1
			elif input_string[i]=="i":
				num+=1
			elif input_string[i]=="o":
				num+=1
			elif input_string[i]=="u":
				num+=1
	print(num)