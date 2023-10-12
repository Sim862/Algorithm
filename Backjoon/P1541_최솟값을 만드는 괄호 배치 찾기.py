A = list(map(str,input().split("-")))
sums = []
sum = 0


for i in range(len(A)):
	N = list(A[i].split("+"))
	n = 0
	for k in range(len(N)):
		n += int(N[k])
	sums.append(n)

sum = sums[0]

for i in range(1, len(sums), +1):
	sum -= sums[i]

print(sum)