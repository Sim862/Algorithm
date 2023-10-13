import sys
N = 8
g = [None] * N
g[0] = [(1, 3), (3, 5), (4, 6)]
g[1] = [(2, 3), (3, 1), (5, 4)]
g[2] = [(3, 7)]
g[3] = [(4, 4), (5, 1)]
g[4] = [(5, 8), (6, 1)]
g[5] = [(2, 6), (7, 10)]
g[6] = [(5, 9), (7, 1)]
g[7] = []

included = [False for _ in range(N)]
previous = [-1] * N
distance = [sys.maxsize for _ in range(N)]

s = 0

previous[s] = 0
distance[s] = 0

for i in range(N):
    m = -1
    min_value = sys.maxsize
    for j in range(N):
        if not included[j] and distance[j] < min_value:
            min_value = distance[j]
            m = j
    included[m] = True

    for w, wt in g[m]:
        if not included[w] and distance[m] + wt < distance[w]:
            distance[w] = distance[m] + wt
            previous[w] = m

print('정점 ', s, '(으)로부터 최단 거리 : ')
for i in range(N):
    if distance[i] == float('inf'):
        print(s, '와(과) ', i, ' 사이에 경로 없음.')
    else:
        print('[%d, %d]' % (s, i), '=', distance[i])

print('\n정점 ', s, '(으)로부터 최단 경로')

for i in range(N):
    back = i
    print(back, end=' ')
    while back != s:
        print(' <- ', previous[back], end=' ')
        back = previous[back]
    print()