from unittest.mock import patch
import unittest
from io import StringIO
import argparse
from importlib import import_module
import os 
import re
from datetime import datetime

def getQuestionNumber():
	parser = argparse.ArgumentParser()
	parser.add_argument('--number', '-n', type=int, help='Input Question Number')
	ns, args = parser.parse_known_args()
	
	return ns.number, [parser.prog] + args

class Test(unittest.TestCase):

	QNUM = 0

	def setUp(self) -> None:
		self.fileName = self.getFileName(self.QNUM)
		self.testList = getattr(import_module(f"{self.fileName}.test_case"),"TestCase")()
		self.solution = getattr(import_module(f"{self.fileName}.solution"), "solution")
	
	def testSolution(self):
		print()
		for testInput, answer in self.testList:
			if isinstance(testInput, str):
				testInput = [x.strip() for x in testInput.strip().split("\n") if re.search("\S", x)]
			else:
				testInput = str(testInput)
			if isinstance(answer, str):
				answer = [x.strip() for x in answer.strip().split("\n") if re.search("\S", x)]
			else:
				answer = str(answer)
			self._testSolution(testInput, answer)

	def calcTime_decorator(realFunc):
		def func(*args, **kwargs):
			t = datetime.now()
			realFunc(*args, **kwargs)
			print(f"running time = {datetime.now()-t}")
		return func

	@calcTime_decorator
	def _testSolution(self ,testInput, rightAnswer):
		with patch('sys.stdout', new = StringIO()) as fake_out:
			with patch('builtins.input',side_effect=testInput):
				self.solution()
				printValue = fake_out.getvalue()
				self.assertEqual(printValue, "\n".join(str(x) for x in rightAnswer)+"\n")
		userAnswer = printValue.split("\n")[:-1]
		print(f"inputAns={userAnswer}, rightAnswer={rightAnswer}", end="\t")

			
	def getFileName(self, questionNum):
		fileName = [x for x in os.listdir() if re.findall(rf"^{questionNum}_",x)]
		if len(fileName) > 1:
			raise "같은 번호의 파일이 두개 이상 있는지 확인해주세요"
		return fileName[0]

if __name__ == '__main__':
	
	Test.QNUM, otherArg = getQuestionNumber()

	try:
		unittest.main(argv=otherArg)
	
	finally:
		print(f"https://www.acmicpc.net/problem/{Test.QNUM}")