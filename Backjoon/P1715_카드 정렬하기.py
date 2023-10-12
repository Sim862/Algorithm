import queue
from queue import PriorityQueue

N = int(input())
cards = queue.PriorityQueue()
count = 0
for i in range(N):
	cards.put(int(input()))

while cards.qsize() != 1 :
	card1 = cards.get();
	card2 = cards.get()
	card3 = card1 + card2

	count += card3
	cards.put(card3)

print(count)