import sys
input = sys.stdin.readline

str = input()
index = len(str)-2
check = True
for i in range(len(str)-1):
    if str[i] != str[index]:
        check = False
    index = index - 1
if check:
    print(1)
else :
    print(0)