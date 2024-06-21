import sys
input = sys.stdin.readline

n = int(input())
nums = list(map(int, input().split()))

min = min(nums)
max = max(nums)

print("%d %d" %(min,max))