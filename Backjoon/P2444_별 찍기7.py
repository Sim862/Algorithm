import sys
input = sys.stdin.readline

n = int(input())
s = 1
e = n
for i in range(n):
    e = e - 1
    for k in range(e):
        print(" ", end = "")
    for j in range(s):
        print("*", end = "")
    print()
    s = s+2
s = s-2
for i in range(n-1):
    e = e +1
    s = s-2
    for k in range(e):
        print(" ", end = "")
    for j in range(s):
        print("*", end = "")
    print()

