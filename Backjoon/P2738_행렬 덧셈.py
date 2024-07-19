import sys
input = sys.stdin.readline

n, m = map(int,input().split())
arrayA = [[0] * m]*n
arrayB = [[0] * m]*n

for i in range(n):
    arrayA[i] = list(map(int,input().split()))
for i in range(n):
    arrayB[i] = list(map(int,input().split()))

for i in range(n):
    for j in range(m):
        print(arrayA[i][j] + arrayB[i][j],end = " ")
    print()