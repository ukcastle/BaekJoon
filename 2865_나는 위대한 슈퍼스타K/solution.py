# import sys
# input = sys.stdin.readline

def solution():

	n,m,s = [int(x) for x in input().split()]

	ls = [0.0 for _ in range(n)]
	for _ in range(m):
		line = input().split()
		for i in range(n):
			index = int(line[2*i])-1
			ls[index] = max(ls[index], float(line[2*i+1]))
	print(round(sum(sorted(ls,reverse=True)[:s]),1))
solution()