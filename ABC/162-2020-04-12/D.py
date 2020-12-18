N = int(input())
S = []
S = input()

x = 0

for i in range(1, N + 1):
    for j in range(1, N + 1):
        for k in range(1, N + 1):
            if S[i] == "R" or S[j] == "R" or S[k] == "R":
                if S[j] or S[k]:
                    if S[k]:
                        x += 1


print(x)
"""print(type(N))
print(type(S))
print(S[2])"""