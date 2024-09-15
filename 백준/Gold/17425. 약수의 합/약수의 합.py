import sys
input = sys.stdin.readline

max = 1000000
dp = [1] * (max+1)
sum = [0] * (max+1)

for i in range(2, max+1):
    j = 1
    while i * j <= max:
        dp[i * j] += i
        j += 1

for i in range(1, max+1):
    sum[i] = sum[i-1] + dp[i]

t = int(input())
for i in range(t):
    n = int(input())
    print(sum[n])