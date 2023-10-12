import sys
N = 7
s = 0
g = [None] * N
g[0] = [(1, 9), (2, 10)]
g[1] = [(0, 9), (3, 10), (4, 5), (6, 3)]
g[2] = [(0, 10), (3, 9), (4, 7), (5, 2)]
g[3] = [(1, 10), (2, 9), (5, 4), (6, 8)]
g[4] = [(1, 5), (2, 7), (6, 1)]
g[5] = [(2, 2), (3, 4), (6, 6)]
g[6] = [(1, 3), (3, 8), (4, 1), (5, 6)]

visitied = [False] * N
D = [sys.maxsize] * N
D[s] = 0
previous = [None] * N
previous[s] = s

for k in range(N): # N을 다 돌면 어디로 가든 전부 연결 됨
    m = -1  # 확인할 인덱스
    min_value = sys.maxsize # 거리 초기화
    for j in range(N): # N을 전부 돌면 서 확인
        if not visitied[j] and D[j] < min_value:  # 방문 했는지와 지금 노드와 연결된 노드들의 거리 비교
                                                  # D는 14번 라인에서 maxsize로 초기화 했기 때문에 변경됬다는 것은 간선이 연결되었다는 것
                                                  # D[0] 은 15번 라인에서 0으로 변경했기 떄문에 0번째 노드는 조건에 적합함
                                                  # 즉 방문하지 않았고 D[j]가 변경됬다는 것은 간선이 연결되었다는 뜻, 연결된 간선들의 거리를 비교에 다음 연결될 노드를 찾는 과정
            min_value = D[j] # 간선이 연결된 노드들의 최솟값을 저장하고 위 반복문을 통해 비교
            m = j # 비교를 통해 선정된 인덱스를 m에 입력
    visitied[m] = True # 반복문을 통해 최종 선별된 제일 가까운 노드 m을 방문했다고 표시

    for w, wt in list(g[m]): # 위 선택된 노드의 간선을 학인
        if not visitied[w]: # m 노드와 간선이 연결된 노드들 중 방문하지 않은 노드 선택
            if wt < D[w]: # m 노드와 연결되 있고 방문하지 않은 w노드의 간선들의 거리를 비교
                          # 만약 이미 방문한 다른 노드와 연결되있다면 값이 maxsize에서 변경되어 있기 때문에 그 중 최솟값을 결정함
                D[w] = wt # w 노드와의 최소 거리를 업데이트
                previous[w] = m # w와 연결되있는 노드를 업데이트


print('최소신장트리: ', end= '')
mst_cost = 0
for i in range(1, N):
    print('(%d, %d)' % (i, previous[i]), end='')
    mst_cost += D[i]
print('\n최소신장트리 가중치 : ',mst_cost)
