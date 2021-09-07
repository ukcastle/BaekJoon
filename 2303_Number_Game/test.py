from unittest.mock import patch
import unittest
from solution import solution
from test_case import getTestList

class Test(unittest.TestCase):

	def testSolution(self, userInput, rightAnswer):
		with patch('builtins.input',side_effect=userInput):
			ans = solution()
		print(f"inputAns={ans}, rightAnswer={rightAnswer}")
		self.assertEqual(ans, rightAnswer)
    
if __name__ == '__main__':
    
    for input, answer in getTestList():
        Test().testSolution(input, answer)
