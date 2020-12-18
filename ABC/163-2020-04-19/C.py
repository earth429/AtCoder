N = int(input())

A = input().split()

A_i = [int(s) for s in A]

for i in range(1, N + 1):
    print(A_i.count(i))