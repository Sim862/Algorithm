import sys
input = sys.stdin.readline

n = int(input())
str = input()
sum = 0;
for i in range(n):
    sum = sum + int(str[i])

print(sum)
