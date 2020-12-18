import math

import numpy as np

a = 2 * 10**200
b = 5 * 10**200

#オーバフロー
#print(np.sqrt(float(a) * float(b)))

#対策後
k = max([float(np.abs(a)), float(np.abs(b))])
print(k * np.sqrt((a/k) * (b/k)))

"""a, b, c = map(int, input().split())

if math.sqrt(a) + math.sqrt(b) < math.sqrt(c):
    print("Yes")
else:
    print(math.sqrt(a) + math.sqrt(b))
    print(math.sqrt(c))
    print("No")"""

#sqrt(3) +sqrt(4)
