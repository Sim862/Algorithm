import sys
input =sys.stdin.readline

array = [[0]*9]*9

max = 0
x = 0
y = 0
for i in range(len(array)):
	array[i] = list(map(int,input().split()))
	for j in range(len(array[i])):
		if max < array[i][j]:
			max = array[i][j]
			y = i
			x = j

print(max)
print(str(y+1) + " " + str(x+1))
