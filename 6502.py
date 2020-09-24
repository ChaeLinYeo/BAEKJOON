i=0
while(True):
    rwllist = list(map(float, input().split()))
    i+=1
    if rwllist==[0] : 
        break
    size = ((rwllist[1]**2)+(rwllist[2]**2))**0.5
    if size <= rwllist[0]*2 : 
        print("Pizza", i, "fits on the table.")
    if size > rwllist[0]*2:
        print("Pizza", i, "does not fit on the table.")
    size = 0