from collections import Counter

def solution():

	n = int(input())

	# ls = [[0]*10 for _ in range(n+1)]
	ls = [0]*10
	for i in range(1,n+1):
		print(Counter(str(i)))
		break
	# print(ls)


# import sys
# input = sys.stdin.readline
# solution()

# --- 제출할 때 주석 풀기 ---