class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = """
    5 2 1
2 4
3
    """
    testOutput = """
    1
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)
    testInput = """
    5 2 3
2 4
1 3 5
    """
    testOutput = """
    0
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)


