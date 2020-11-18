# while(True):
#     ascii = [97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122]
#     input_string = ""
#     input_string = input()
#     if input_string == "*":
#         break
#     else:
#         case = list(map(str, input_string))
#         for i in range(len(case)):
#             case[i] = ord(case[i])

#         j=0
#         while(32 in case):
#             if case[j]==32:
#                 case.remove(case[j])
#             j+=1

#         new_case = set(case)
#         case = list(new_case)
#         case.sort()
#         # print(case)

#         if case==ascii:
#             print("Y")
#         else:
#             print("N")
#     input_string = ""
#     case = []
#     j=0

while True:
	n,l = input().replace(' ',''), [0]*26
	if(n=='*'): break
	for i in n: l[ord(i)-97] = 1
	print('N' if l.count(0) else 'Y')