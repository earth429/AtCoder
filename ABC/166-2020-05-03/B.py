N, K = map(int, input().split())

d = []
A = [[]]
i = 0
j = 0
k = 0
trick = 0
sudeni = [N - 1]
sunuke = []

for i in range(K):
    d[i] = int(input())
    for j in range(d[i] - 1):
        A[i][j] = int(input())
        sudeni[j] = A[i][j]
    for k in range(len(sudeni) - 1):
        sunuke[sudeni[k]] += 1

print(sunuke)