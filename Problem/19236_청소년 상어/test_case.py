class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = ['7 6 2 3 15 6 9 8\r\n3 1 1 8 14 7 10 1\r\n6 1 13 6 4 3 11 4\r\n16 1 8 7 5 2 12 2\r\n', '16 7 1 4 4 3 12 8\r\n14 7 7 6 3 4 10 2\r\n5 2 15 2 8 3 6 4\r\n11 8 2 4 13 5 9 4\r\n', '12 6 14 5 4 5 6 7\r\n15 1 11 7 3 7 7 5\r\n10 3 8 3 16 6 1 1\r\n5 8 2 7 13 6 9 2\r\n', '2 6 10 8 6 7 9 4\r\n1 7 16 6 4 2 5 8\r\n3 7 8 6 7 6 14 8\r\n12 7 15 4 11 3 13 3\r\n']
    testOutput = ['33\r\n', '43\r\n', '76\r\n', '39\r\n']
    for i in range(len(testInput)):
      self.appendTest(testInput=testInput[i],testOutput=testOutput[i])


