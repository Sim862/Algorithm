import sys
input = sys.stdin.readline

n = int(input())
measures = list(map(int,input().split()))
min = min(measures)
max = max(measures)

print(max * min)