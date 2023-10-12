N = int(input())
S = [[0]*2 for _ in range(N)]
end = 0
count = 0

for i in range(N):
    start_Input, end_Input = map(int, input().split())
    S[i][0] = start_Input
    S[i][1] = end_Input

S.sort(key=lambda x:(x[1],x[0]))

for i in range(N):
    if end <= S[i][0]:
        end = S[i][1]
        count += 1

print(count)