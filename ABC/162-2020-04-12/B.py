N = int(input())

x = 0

for i in range(N+1):
    #print(i)
    if i % 15 == 0:
        #FB
        pass
    elif i % 3 == 0:
        #F
        pass
    elif i % 5 == 0:
        #B
        pass
    else:
        x += i

print(x)
