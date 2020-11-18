N = int(input())
for i in range(N):
    input_case = ""
    input_case = input()
    case = list(map(int, input_case))
    # print(case)
    k=0
    while(len(case)>2):
        # print(k, len(case)-1)
        case.pop()
        # print(case)
        case.remove(case[k])
        # print(case)
        # print("-----")
        if len(case)==2:
            # print(case)
            if case[0]==case[1]:
                print("Do-it")
            elif case[0] != case[1]:
                print("Do-it-Not")
    input_case = ""
    case = []