N, K = map(int,input().split())

nums = []

for i in range(1, N+1):
    if N % i == 0:
        nums.append(i);

if K > len(nums):
    print(0)
else :
    print(nums[K-1])