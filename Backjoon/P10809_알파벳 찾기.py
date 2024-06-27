import sys
input = sys.stdin.readline

abc = "abcdefghijklmnopqrstuvwxyz"
str = input()

for i in abc:
    if i in str:
        print(str.index(i), end=" ")
    else:
        print(-1, end = " ")
