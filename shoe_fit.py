

for i in range(int(input())):
    a,b,c = map(int,input().split())
    count = a+b+c
    if count == 0 or count ==3:
        print("0")
    else:
        print("1")    