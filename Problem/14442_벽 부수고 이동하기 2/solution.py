from collections import deque

def solution():

	n,m,k = (int(x) for x in input().split())
	
	maps = [list(map(int, input().strip())) for _ in range(n)]
	visit = [[[0] * (k+1) for _ in range(m)] for _ in range(n)]
	visit[0][0] = [1]*(k+1)

	q = deque()
	q.append((0,0,0))
	MOVE = ((-1,0),(1,0),(0,-1),(0,1))
	
	result = -1
	while q:
		nowX, nowY, nowK = q.popleft()
		nowVal = visit[nowX][nowY][nowK]+1
		if nowX == n-1 and nowY == m-1:
			result = (visit[nowX][nowY][nowK])
			break
			
		for moveX, moveY in MOVE:
			
			movedX, movedY = nowX+moveX, nowY+moveY
			
			if movedX < 0 or movedX > n-1 or movedY < 0 or movedY > m-1:
				continue
			
			if maps[movedX][movedY] == 1 and nowK<k and visit[movedX][movedY][nowK+1] == 0:
				visit[movedX][movedY][nowK+1] = nowVal
				q.append((movedX,movedY,nowK+1))

			if maps[movedX][movedY] == 0 and visit[movedX][movedY][nowK] == 0:
				visit[movedX][movedY][nowK] = nowVal
				q.append((movedX,movedY,nowK))


	print(result)

import sys
input = sys.stdin.readline
solution()

# --- 제출할 때 주석 풀기 ---