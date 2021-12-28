from collections import deque

# wwbwww
# bbwww-
# -bbbw-
# ---bbb
# ---b--
# ------

def bfs(y, x, table, size):
	indexQueue = deque()
	indexQueue.append((y, x))
	table[y][x] = 'w'
	cnt = 0
	ls = [(-1, -1), (-1, 1), (1, -1), (1, 1), (-1, 0), (1, 0), (0, -1), (0, 1)]
	while len(indexQueue)>0:
		y, x = indexQueue.popleft()
		for i, j in ls:
			Y, X = y+i, x+j
			if (0 <= Y < size) and (0 <= X < size) and table[Y][X] == '-':
				indexQueue.append((Y, X))
				table[Y][X] = 'w'
				cnt += 1
	return cnt

def solution():
	for _ in range(int(input())):
		size = int(input())
		table = [list(input()) for _ in range(size)]
		res = 0
		for i in range(size):
			for j in range(size):
				if table[i][j] == 'w':
					res += bfs(i, j, table, size)
		print(res)
	
	