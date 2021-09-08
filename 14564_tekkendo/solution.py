from collections import deque

def kick(s,t):
	kickQueue =deque()
	kickQueue.append((s,t,0))

	visit = [100000]*1000
	while kickQueue:
		score, target, cnt = kickQueue.popleft()
		if score <= target:
			kickQueue.append((score*2, target+3, cnt+1))
			kickQueue.append((score+1, target, cnt+1))

			if visit[score] > cnt:
				visit[score] = cnt
			
			if score == target:
				return cnt


def solution():	
	n = int(input())

	for _ in range(n):
		score,target = [int(x) for x in input().split()]
		print(kick(score,target))

solution()