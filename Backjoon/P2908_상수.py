import sys
input = sys.stdin.readline


A, B = input().split()
temp = ""

for i in range(len(A)-1,-1,-1):
    temp = temp + A[i]
A = int(temp)
temp = ""
for i in range(len(B)-1, -1, -1):
    temp = temp + B[i]

B = int(temp)
temp = ""

if A > B :
    print(A)
elif A < B :
    print(B)
