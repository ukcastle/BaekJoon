class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = ['6 4 1\r\n0100\r\n1110\r\n1000\r\n0000\r\n0111\r\n0000\r\n', '6 4 2\r\n0100\r\n1110\r\n1000\r\n0000\r\n0111\r\n0000\r\n', '4 4 3\r\n0111\r\n1111\r\n1111\r\n1110\r\n']
    testOutput = ['15\r\n', '9\r\n', '-1\r\n']
    for i in range(len(testInput)):
      self.appendTest(testInput=testInput[i],testOutput=testOutput[i])


