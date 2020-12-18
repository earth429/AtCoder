N = int(input())
X = []
C = []

for i in range(N):
    a, b = input().split()
    X.append(a)
    C.append(b)

r_boll = []
b_boll = []

for i in range(N):
    if C[i] == 'R':
        r_boll.append(X[i])
    elif C[i] == 'B':
        b_boll.append(X[i])


r_boll.sort()
b_boll.sort()


for i in range(len(r_boll)):
    print(r_boll[i])

for i in range(len(b_boll)):
    print(b_boll[i])




"""
4
9 B
60 R
2 R
4 B

"""