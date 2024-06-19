all_Price = int(input())
num_Tpyes = int(input())
check_Price = 0

for i in range(num_Tpyes):
    p, n = map(int, input().split())
    check_Price = check_Price + (n * p)

if check_Price == all_Price:
    print("Yes")
else:
    print("No")