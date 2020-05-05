#!/usr/bin/python3
pal = 0
for i in range(999, 100, -1):
    for j in range(999, 100, -1):
        mul = str(i * j)
        if mul == mul[::-1] and int(mul) > pal:
            pal = int(mul)
            ii = i
            jj = j


print("{} * {} = {}".format(ii, jj, pal))
