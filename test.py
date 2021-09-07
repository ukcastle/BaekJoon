from unittest.mock import patch
import unittest

import argparse
from importlib import import_module
import os 
import re
import sys
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
		for input, answer in self.testList:
			self._testSolution(input, answer)

	def calcTime_decorator(realFunc):
		def func(*args, **kwargs):
			t = datetime.now()
			realFunc(*args, **kwargs)
			print(f"running time = {datetime.now()-t}")
		return func

	@calcTime_decorator
	def _testSolution(self ,userInput, rightAnswer):
		with patch('builtins.input',side_effect=userInput):
			ans = self.solution()
		print(f"inputAns={ans}, rightAnswer={rightAnswer}", end="\t")
		self.assertEqual(ans, rightAnswer)
			
	def getFileName(self, questionNum):
		fileName = [x for x in os.listdir() if re.findall(rf"^{questionNum}_",x)]
		if len(fileName) > 1:
			raise "같은 번호의 파일이 두개 이상 있는지 확인해주세요"
		return fileName[0]

if __name__ == '__main__':
	
	Test.QNUM, otherArg = getQuestionNumber()
	unittest.main(argv=otherArg)
