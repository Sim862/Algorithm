length = int(input())
sums = [-1]*length

for i in range(length):
    a, b = input().split()
    sums[i] = int(a) + int(b)
for i in range(length):
    print(sums[i])


