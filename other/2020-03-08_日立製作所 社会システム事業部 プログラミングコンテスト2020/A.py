x = [10]
x = input()
y = 0

for i in range(len(x) + 1):
    if x[i] == "h" and x[i+1] != "h":
        if x[i + 1] == "i" and x[i+2] != "i":
            y=1
            
            break
    else:
        pass


if y == 1:
    print("Yes")
else:
    print("No")

"""if x in "hi":
    print("Yes")
else:
    print("No")"""
