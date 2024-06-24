import sys
input = sys.stdin.readline

n, m = map(int,input().split())
array = [i for i in range(n+1)]

for k in range(m):
    i, j = map(int,input().split())
    for l in range(i, j+1):
        temp = array[l]
        array[l] = array[j]
        array[j] = temp
        j = j - 1
        if j <= l :
            break

for i in range(1,len(array)):
    print(array[i], end= " ")