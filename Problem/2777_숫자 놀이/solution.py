# import sys
# input = sys.stdin.readline

def solution():

	n = int(input())
	
	for _ in range(n):
		num = int(input())

		if num == 1:
			print(1)
			continue

		cnt = 0
		c = 0
		while(True):
			if cnt == 8:
				print(-1)
				break

			if num == 1:
				print(c)
				break 

			cnt = 0

			for i in range(9,1,-1):
				if num%i == 0:
					num = num/i
					c+=1
					break
				cnt+=1

solution()