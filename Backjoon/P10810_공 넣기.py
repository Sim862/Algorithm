import sys
input = sys.stdin.readline

n ,m = map(int,input().split())
buckets = [0]*n
for l in range(m):
    i, j ,k = map(int,input().split())
    for n in range(i-1 , j):
        buckets[n] = k

for i in buckets:
    print(i, end=" ")