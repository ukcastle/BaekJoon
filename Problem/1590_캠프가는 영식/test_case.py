class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = ['1 285\r\n150 50 10\r\n', '1 123456\r\n123456 10000 1\r\n', '3 1\r\n270758 196 67\r\n904526 8930 66\r\n121164 3160 56\r\n', '3 1000000\r\n718571 2557 74\r\n480573 9706 54\r\n16511 6660 90\r\n', '5 395439\r\n407917 8774 24\r\n331425 4386 58\r\n502205 9420 32\r\n591461 1548 79\r\n504695 8047 53\r\n']
    testOutput = ['15\r\n', '0\r\n', '121163\r\n', '-1\r\n', '1776\r\n']
    for i in range(len(testInput)):
      self.appendTest(testInput=testInput[i],testOutput=testOutput[i])


