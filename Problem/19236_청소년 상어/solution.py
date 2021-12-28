MOVE = [(-1,0),(-1,-1),(0,-1),(+1,-1),(+1,0),(+1,+1),(0,+1),(-1,+1)]
answer= 0

def move(fishList, sharkX, sharkY):
	
	for i in range(1,17):
		isFind = False
		for fishX in range(4):
			for fishY in range(4):
				if fishList[fishX][fishY][0] == i:
					fX, fY = (fishX, fishY)
					isFind = True
					break
			if isFind: 
				break
		if not isFind: 
			continue

		moveDir = fishList[fX][fY][1]

		for _ in range(8):
			moveX, moveY = MOVE[moveDir]
			movedX, movedY = fX + moveX, fY+moveY
			if 0 <= movedX < 4 and 0 <= movedY < 4:
				if not (movedX == sharkX and movedY == sharkY):
					fishList[fX][fY],fishList[movedX][movedY] = fishList[movedX][movedY],fishList[fX][fY]
					fishList[movedX][movedY][1] = moveDir
					break
			moveDir = (moveDir+1)%8		

def getFeedList(fishList, x, y):
	position = []
	sharkDir = fishList[x][y][1]

	for _ in range(1,4):
		moveX, moveY = MOVE[sharkDir]
		nowX, nowY = x+moveX, y+moveY

		if 0 <= nowX < 4 and 0 <= nowY < 4 and 1<= fishList[nowX][nowY][0] <= 16:
			position.append([nowX, nowY])
		x,y = nowX, nowY

	return position

import copy
def dfs(fishList, x, y, nowSum):
	global answer
	nowList = copy.deepcopy(fishList)

	now = nowList[x][y][0]
	nowList[x][y][0] = -1	

	move(nowList, x, y)
	nextList=getFeedList(nowList, x, y)

	answer = max(answer, nowSum+now)

	for nextX, nextY in nextList:
		dfs(nowList,nextX,nextY,nowSum+now)


def solution():
	fishList = [[None]*4 for _ in range(4)]
	for i in range(4):
		info = input().split()
		for j in range(4):
			fishList[i][j] = [int(info[2*j]),int(info[2*j+1])-1]

	dfs(fishList,0,0,0)
	global answer
	print(answer)


# import sys
# input = sys.stdin.readline
# solution()

# --- 제출할 때 주석 풀기 ---