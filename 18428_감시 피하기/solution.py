# import sys
# input = sys.stdin.readline

def search(box,t):	
	for x,y in t:
		for i in range(x-1,-1,-1):
			if box[i][y] == "S":
				return False
			elif box[i][y] == "O":
				break	
		for i in range(x+1,len(box)):
			if box[i][y] == "S":
				return False
			elif box[i][y] == "O":
				break
		for i in range(y-1,-1,-1):
			if box[x][i] == "S":
				return False
			elif box[x][i] == "O":
				break	
		for i in range(y+1,len(box)):
			if box[x][i] == "S":
				return False
			elif box[x][i] == "O":
				break
	return True
			
def solution():

	n = int(input())
	box = [input().split() for _ in range(n)]
	t = []
	x = []
	for i in range(n):
		for j in range(n):
			if box[i][j] == "T":
				t.append((i,j))
			elif box[i][j] == "X":
				x.append((i,j))
	
	from itertools import permutations 

	for (x1,y1),(x2,y2),(x3,y3) in list(permutations(x, 3)):

		box[x1][y1] = 'O'
		box[x2][y2] = 'O'
		box[x3][y3] = 'O'

		if search(box,t):
			print("YES")
			return

		box[x1][y1] = 'X'
		box[x2][y2] = 'X'
		box[x3][y3] = 'X'
	print("NO")

# solution()