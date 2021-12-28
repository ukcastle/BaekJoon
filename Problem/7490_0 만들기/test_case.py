class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
#     testInput = """
#     1
# 3
#     """
#     testOutput = """
#     1+2-3
#     """
#     self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    1
7
    """
    testOutput = """
1+2-3+4-5-6+7
1+2-3-4+5+6-7
1-2 3+4+5+6+7
1-2 3-4 5+6 7
1-2+3+4-5+6-7
1-2-3-4-5+6+7
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)


