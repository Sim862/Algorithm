import sys
input = sys.stdin.readline

num_list = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
n, m = map(int,input().split())
s = ""

while n:
    s = num_list[n % m] + s
    n = n // m
print(s)