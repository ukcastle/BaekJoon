class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = """
    2
10
26
    """
    testOutput = """
    2
-1
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)


