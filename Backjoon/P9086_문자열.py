import sys
input = sys.stdin.readline

n = int(input())

for i in range(n):
    str = input()
    print(str[0]+str[len(str)-2])