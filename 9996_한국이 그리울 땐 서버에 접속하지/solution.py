def solution():
	import re
	n = int(input())
	forward, backward = input().strip().split("*")
	for _ in range(n):
		if re.fullmatch(f"{forward}.*{backward}+",input().strip()):
			print("DA")
		else:
			print("NE")

# solution()