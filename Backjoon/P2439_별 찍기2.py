import sys
input = sys.stdin.readline

n = int(input())

for i in range(n, 0, -1):
    num = i - 1
    print((" " * num) + ("*" * (n-num)))