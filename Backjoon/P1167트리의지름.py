from collections import  deque

N = int(input())
A = [[] for _ in range(N + 1)]

for _ in range(N):
    Data = list(map(int,input().split()))
    index = 0
    S = Data[index]
    index += 1
    while True:
        E = Data[index]
        if E == -1:
            break
        V = Data[index + 1]
        A[S].append((E,V))
        index += 2

def DFS(x, dis):
    for i in A[x]:
        node, node_dis = i
        if distance[node] == -1:
            distance[node] = dis + node_dis
            DFS(node, dis + node_dis)

distance = [-1] * (N + 1)
distance[1] = 0
DFS(1,0)

res = distance.index(max(distance))
distance = [-1] * (N + 1)
distance[res] = 0
DFS(res, distance[res])
print(max(distance))

