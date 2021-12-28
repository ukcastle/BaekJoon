class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = """
    9
1
2
5
4
3
3
6
6
2
    """
    testOutput = """
    3
7
8
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)


