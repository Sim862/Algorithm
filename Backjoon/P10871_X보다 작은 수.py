import sys
input = sys.stdin.readline

n, x = map(int,input().split())
array = list(map(int,input().split()))
solution = []

for i in array:
    if i < x:
        solution.append(i)

for i in solution:
    print(i, end=" ")