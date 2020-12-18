H, W = map(int, input().split())

if H == 1 or W == 1:
    print(0)
else:

    if H % 2 == 0 and W % 2 == 0:
        #print("d")
        print("{}".format(int(H * (W // 2))))
    elif H % 2 != 0 and W % 2 != 0:  # どっちもきすう
        #print("a")
        print (H * (W // 2) + (H // 2)+1)
    elif H % 2 != 0:
        #print("c")
        print("{}".format(int(H * (W // 2))))
    elif W % 2 != 0:  # Wがきすう
        #print("b")
        print("{}".format(int(H * (W // 2) + (H // 2))))


#500000000000000000
#500000000000000000