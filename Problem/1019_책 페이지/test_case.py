class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = ['11\r\n', '7\r\n', '19\r\n', '999\r\n', '543212345\r\n']
    testOutput = ['1 4 1 1 1 1 1 1 1 1\r\n', '0 1 1 1 1 1 1 1 0 0\r\n', '1 12 2 2 2 2 2 2 2 2\r\n', '189 300 300 300 300 300 300 300 300 300\r\n', '429904664 541008121 540917467 540117067 533117017 473117011 429904664 429904664 429904664 429904664\r\n']
    for i in range(len(testInput)):
      self.appendTest(testInput=testInput[i],testOutput=testOutput[i])


