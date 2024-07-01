import sys
input = sys.stdin.readline

array_Set = [1,1,2,2,2,8]
array_Input = list(map(int,input().split()))

for i in range(len(array_Set)):
    check = array_Set[i] - array_Input[i]
    print(check, end =" ")