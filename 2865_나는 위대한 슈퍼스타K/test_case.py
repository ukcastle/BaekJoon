class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = """
    3 2 2
2 3.0 1 0.2 3 0.1
3 1.0 2 0.5 1 0.2
    """
    testOutput = """
    4.0
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    4 4 3
4 5.0 2 4.0 3 2.0 1 1.0
2 2.0 3 1.0 1 0.5 4 0.3
4 6.0 3 5.0 2 2.0 1 0.0
1 4.0 2 3.0 4 0.6 3 0.3
    """
    testOutput = """
    15.0
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)


