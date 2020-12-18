x = []
x = input()

y = 0

for i in range(len(x)):
    if x[0:2] != "hi":
        break
    if x[i] != 'h' and x[i] != 'i':
        y = 0
        break
    if len(x) % 2 != 0:
        break
    if x[i:i + 2] == "hi":
        y = 1
    else:
        pass

if y == 1:
    print("Yes")
else:
    print("No")