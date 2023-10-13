import sys

V, E = map(int, input().split())
start = int(input())
D = [[] for _ in range(V+1)]

distance = [sys.maxsize for _ in range(V+1)]
visited = [False for _ in range(V+1)]
previous = [-1 for _ in range(V+1)]

distance[start] = 0
previous[start] = start


for i in range(E): # 간선의 개수
    u, v, w = map(int, input().split())
    D[u] = [(v, w)]

for k in range(E):
    m = -1;
    d = sys.maxsize
    for i in range(V):
        if not visited[i+1] and distance[i+1] < d:
            d = distance[i+1]
            m = i+1
    visited[m] = True;

    for n, nt in D[m]:
        if not visited[n] and distance[m] + nt < distance[n]:
            distance[n] = distance[m] + nt
            previous[n] = m

    print()


for i in range(V):
    print(distance[i+1])





