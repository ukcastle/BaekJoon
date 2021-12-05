import re

def solution():

	for _ in range(int(input())):
		if re.search("^[A-F]{0,1}A+F+C+[A-F]{0,1}$",input()):
			print("Infected!")
		else:
			print("Good")

import sys
input = sys.stdin.readline
solution()