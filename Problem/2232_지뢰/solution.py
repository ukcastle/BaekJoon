from collections import deque

mineList = []
retList = []

def boom(left, right, queue):
	splitMineList = mineList[left:right]
	boomIndex = splitMineList.index(max(splitMineList))

	retList.append(boomIndex+left)
	lBoomIdx = rBoomIdx = boomIndex+left

	ok = True
	while ok:
		ok = False
		if lBoomIdx > left and mineList[lBoomIdx] > mineList[lBoomIdx - 1] :
			lBoomIdx -= 1
			ok = True
		if rBoomIdx < right-1 and mineList[rBoomIdx] > mineList[rBoomIdx + 1] :
			rBoomIdx += 1
			ok = True

	if lBoomIdx > left:
		queue.appendleft((left,lBoomIdx))
	
	if rBoomIdx < right-1:
		queue.appendleft((rBoomIdx+1,right))

def solution():

	n = int(input())
	for i in range(n):
		mineList.append(int(input()))

	q = deque()
	q.appendleft((0,n))

	while q:
		l,r = q.pop()
		boom(l,r,q)

	for i in sorted(retList):
		print(i+1)

# import sys
# input = sys.stdin.readline
# solution()