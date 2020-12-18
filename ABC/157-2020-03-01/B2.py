a11, a12, a13 = (int(x) for x in input().split())
a21, a22, a23 = (int(x) for x in input().split())
a31, a32, a33 = (int(x) for x in input().split())

x = [a11, a12, a13]
y = [a21, a22, a23]
z = [a31, a32, a33]

a = [a11, a21, a31]
b = [a12, a22, a32]
c = [a13, a23, a33]

m1 = [a11, a22, a33]
m2 = [a13, a22, a31]

neko = [input() for i in range(10)]

blist = [a for a in neko if a != '']
print(blist)

print(x)
print(a)
print(m1)

"""x_b = list(set(x) & set(blist))
y_b = list(set(y) & set(blist))
z_b = list(set(z) & set(blist))

ab = list(set(a) & set(blist))
bb = list(set(b) & set(blist))
cb = list(set(c) & set(blist))

m1b = list(set(m1) & set(blist))
m2b = list(set(m2) & set(blist)) """

xb = []
yb = []
zb = []
ab = []
bb = []
cb = []
m1b = []
m2b = []
for tag in x:
    for src in blist:
        if tag == src:
            xb.append(tag)

for tag in y:
    for src in blist:
        if tag == src:
            yb.append(tag)


for tag in z:
    for src in blist:
        if tag == src:
            zb.append(tag)


for tag in a:
    for src in blist:
        if tag == src:
            ab.append(tag)


for tag in b:
    for src in blist:
        if tag == src:
            bb.append(tag)

for tag in c:
    for src in blist:
        if tag == src:
            cb.append(tag)

for tag in m1:
    for src in blist:
        if tag == src:
            m1b.append(tag)

for tag in m1:
    for src in blist:
        if tag == src:
            m1b.append(tag)

print(xb)
print(yb)
print(zb)
print(ab)
print(bb)
print(cb)
print(m1b)
print(m2b)

if len(xb) == 3 or len(yb) == 3 or len(zb) == 3:
    print("Yes")
elif len(ab) == 3 or len(bb) == 3 or len(cb) == 3:
    print("Yes")
elif len(m1b) == 3 or len(m2b) == 3:
    print("Yes")
else:
    print("No")