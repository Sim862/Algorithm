import sys
input = sys.stdin.readline

n = int(input())

array = [[False for j in range(100)] for i in range(100)]

for i in range(n):
    x, y = map(int,input().split())
    for x_i in range(10):
        for y_i in range(10):
            array[x+x_i][y+y_i] = True
sum = 0

for x in range(100):
    for y in range(100):
        if array[x][y]:
            sum = sum + 1
print(sum)
