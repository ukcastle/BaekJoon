from collections import deque

# 3
# 1 1 10
# 1 5 1
# 2 2 -1

def move(x,y,table, moveRange, moveQueue):
	size = len(table)
	if x+moveRange < size:
		moveQueue.append((y, x+moveRange))
	if y+moveRange < size:
		moveQueue.append((y+moveRange, x))

def solution():
	n = int(input())
	
	table = []
	for _ in range(n):
		table.append([int(x) for x in input().split()])
	
	moveQueue = deque([(0,0)])

	while moveQueue:
		y,x = moveQueue.pop()
		moveRange = table[y][x]
		if moveRange==-1:
			print("HaruHaru")
			return
		if moveRange==0:
			continue
		move(x, y, table,moveRange ,moveQueue)

	print("Hing")	
