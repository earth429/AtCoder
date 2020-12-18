x = input()
y = input()
z = input()

a = x.split()
b = y.split()
c = z.split()

ma = []
mb = []
mc = []

for i in range(10):
    inp = input()
    for j in range(3):
        if inp == a[j]:
            ma.append(inp)
        elif inp == b[j]:
            mb.append(inp)
        elif inp == c[j]:
            mc.append(inp)

if len(ma) >= 3 or len(mb) >= 3 or len(mc) >= 3:
    print("Yes")
