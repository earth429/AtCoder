x = []
y = []
z = []
x = input().split()


y = input().split()  #A

z = input().split()  #B

waribiki = []
nest = []
for i in range(int(x[2])):
    waribiki = input().split()
    nest.append(waribiki)

inu = 0
neko = 0
nedan = []
for i in range(len(nest)):
    inu = int(nest[i][0])
    neko = int(nest[i][1])
    nedan.append(int(y[inu-1])+int(z[neko-1])-int(nest[i][2]))


may = int(min(y)) + int(min(z)) #たぶんやすい
#print(may)

#割引券複数
if len(nedan) > 1:
    print(min(nedan))
elif int(may) <= min(nedan):
    print(may)
else:
    print(nedan[0])


#print(nedan)

"""print(x)
print(y)
print(z)
print(nest)

2 3 1
3 3
3 3 3
1 2 1"""