class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = """
    5
X S X X T
T X S X X
X X X X X
X T X X X
X X T X X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    4
S S S T
X X X X
X X X X
T T T X
    """
    testOutput = """
    NO
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    4
S S S X
X X X X
X X X X
X X X X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    4
X S X T
X X S X
X X X X
T T T X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)



    testInput = """
    5
X X S X X
X X X X X
S X T X S
X X X X X
X X S X X
    """
    testOutput = """
    NO
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    5
X T X T X
T X S X T
X S S S X
T X S X X
X T X X X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    5
X S S S X
T X X S X
X T X S X
X X T X S
X X X T X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    5
X S S S X
X X X S X
X X X S X
X X X X S
X X X X X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    3
X X X
S X X
S X X
    """
    testOutput = """
    YES
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)