import sys
input = sys.stdin.readline

n = int(input())
score = list(map(int,input().split()))
score.sort(reverse = True)
m = score[0]
average = 0;

for i in range(len(score)):
    score[i] = score[i]/m*100
    average = average + score[i]

print(average/len(score))