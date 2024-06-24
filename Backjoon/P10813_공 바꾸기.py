import sys
input = sys.stdin.readline

n, m = map(int, input().split())
array = [0]*(n+1)
for i in range(n+1):
    array[i] = i

for k in range(m):
    i, j = map(int,input().split())
    temp = array[i]
    array[i] = array[j]
    array[j] = temp

for i in range(1, len(array)):
    print(array[i], end=" ")