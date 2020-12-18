S, L, R = map(int, input().split())

if S >= L and S <= R:
    print(S)
elif L > S:
    print(L)
elif R < S:
    print(R)