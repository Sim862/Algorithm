import sys
input = sys.stdin.readline
n = int(input())
array = list(map(int, input().split()))
v = int(input())
count = 0
for i in range(n):
    if array[i] == v:
        count = count + 1

print(count)