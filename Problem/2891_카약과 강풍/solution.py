# import sys
# input = sys.stdin.readline

def solution():

	n = int(input().split()[0])
	ls = [1 for _ in range(n)]
	
	sList = [int(x)-1 for x in input().split()]
	rList = [int(x)-1 for x in input().split()]
	
	for s in sList:
		ls[s] -= 1
	for r in rList:
		ls[r] += 1
	
	for i in range(len(ls)):
		if ls[i] > 1:
			if i-1 >= 0 and ls[i-1] == 0:
				ls[i-1] += 1
				ls[i] -= 1
			elif i+1 < len(ls) and ls[i+1] == 0:
				ls[i+1] += 1
				ls[i] -= 1
	
	print(ls.count(0))
solution()
				

