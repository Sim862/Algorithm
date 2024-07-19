import sys
input = sys.stdin.readline

str = []

for i in range(5):
    a = input()
    str.append(a)

for j in range(15):
    for i in range(5):
        if j < len(str[i]):
            if str[i][j] != "\n":
                print(str[i][j], end = "")