import sys
input = sys.stdin.readline

nums = [0] *10

for i in range(10):
    nums[i] = int(input())%42

nums.sort()

num = -1
count = 0
for i in nums:
    if num != i:
        num = i
        count = count + 1

print(count)