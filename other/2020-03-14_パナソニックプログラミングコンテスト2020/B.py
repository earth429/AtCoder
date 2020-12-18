H, W = map(int, input().split())

if H * W % 2 == 0:
    print("{}".format(int(H * W // 2)))
else:
    print("{}".format(int(H * W // 2 + 1)))