import bisect as bi

def solution():

	n, time = (int(x) for x in (input().strip().split()))

	busList = []

	for _ in range(n):
		start, term, busNum = [int(x) for x in input().strip().split()]
		for i in range(busNum):
			busList.append(start+(i*term))

	busList.sort()

	try:
		print(busList[bi.bisect_left(busList, time)] - time)
	except:
		print(-1)
import sys
input = sys.stdin.readline
solution()

# --- 제출할 때 주석 풀기 ---