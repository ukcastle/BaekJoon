# import sys
# input = sys.stdin.readline

from collections import deque
import re

def appendQueue(queue, string=""):
	queue.appendleft(string+" ")
	queue.appendleft(string+"+")
	queue.appendleft(string+"-")

def solution():
	n = int(input())
	for i in range(n):
		num = int(input())
		nums = "".join([str(x) for x in range(1,num+1)])
		
		q = deque()
		appendQueue(q)
		while q:
			string = q.pop()
			if len(string)==num-1:
				string = "".join([nums[x]+string[x] for x in range(num-1)])+nums[-1]
				if sum([int(x) for x in  re.findall("[+-][0-9]*", "+"+string.replace(" ",""))]) == 0:
					print(string)
			else:
				appendQueue(q,string)

		if i < n-1:
			print()

solution()