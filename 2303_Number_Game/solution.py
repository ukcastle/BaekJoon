'''
첫 줄에는 사람의 수를 나타내는 정수 N이 주어진다. N은 2이상 1,000이하이다. 
그 다음 N 줄에는 1번부터 N번까지 각 사람이 가진 카드가 주어지는 데, 각 줄에는 1부터 10사이의 정수가 다섯 개씩 주어진다. 
각 정수 사이에는 한 개의 빈칸이 있다.

게임에서 이긴 사람의 번호를 첫 번째 줄에 출력한다. 
이긴 사람이 두 명 이상일 경우에는 번호가 가장 큰 사람의 번호를 출력한다.

3
7 5 5 4 9
1 1 1 1 1
2 3 3 2 10

1
'''
MAX=5


def sumAll(num):
	ans = 0
	i,j,k=(0,1,2)
	while i<MAX-2:
		while j<MAX-1:
			while k<MAX:
				temp = int(str(num[i]+num[j]+num[k])[-1])
				if temp>ans:
					ans=temp
				k+=1
				if temp==9:
					return 9
			j+=1
			k=j+1
		i+=1
		j=i+1
		k=i+2
	return ans

def solution():
	answerList = []
	ret = 0
	win = 0
	for index in range(int(input())):
		tempSum = (sumAll([int(x) for x in input().split()]))

		if tempSum >= ret:
			ret = tempSum
			win = index+1

	return win