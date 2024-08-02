A, B, V = map(int,input().split())

day = (V-B) / (A-B)

if day % 1 > 0:
    day = int(day)+1
else:
    day = int(day)
print(day)