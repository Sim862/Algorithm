import queue
from queue import PriorityQueue

N = int(input())
positive_pq = queue.PriorityQueue();
negative_pq = queue.PriorityQueue();
zero = 0
sum = 0

for i in range(N):
	n = int(input())
	if n == 1 :
		sum += 1 # 1 * 10 = 1 부적합 바로 sum에 추가
	elif n == 0:
		zero += 1 # (0 있음을 표시해 하나남은 마이너스와 곱해 0으로 전환)
	elif n > 1:
		positive_pq.put(n * -1) # pq는 오름차순이므로 -1를 곱해 제일 큰 수가 앞으로 오게 설정
	else:
		negative_pq.put(n)

while positive_pq.qsize() > 1:
	n1 = positive_pq.get()
	n2 = positive_pq.get()
	sum += n1 * n2

if positive_pq.qsize() == 1:
	sum += positive_pq.get() * -1

while negative_pq.qsize() > 1:
	n1 = negative_pq.get()
	n2 = negative_pq.get()
	sum += (n1 * n2)

if negative_pq.qsize() == 1:
	if zero == 0:
		sum += negative_pq.get()

print(sum)