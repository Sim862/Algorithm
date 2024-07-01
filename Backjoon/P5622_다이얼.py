import sys
input = sys.stdin.readline

str = input()
str = str.replace("\n", "")
array = []
sum = 0
for i in str:
    num = ord(i)-64
    if num < 4:
        num = 1
    elif num <7:
        num = 2
    elif num <10:
        num = 3
    elif num < 13:
        num =4
    elif num < 16:
        num =5
    elif num < 20:
        num = 6
    elif num < 23:
        num = 7
    elif num < 27:
        num = 8
    sum = sum + 2 + num

print(sum)