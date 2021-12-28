class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,testInput,testOutput):
    self.append((testInput,testOutput))
  
  def addTestCase(self):
    testInput = """
    6
a*d
abcd
anestonestod
facebook
ad
bcd
asggdasfsfd
    """
    testOutput = """
    DA
DA
NE
DA
NE
DA
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    6
h*n
huhovdjestvarnomozedocisvastan
honijezakon
atila
je
bio
hun
    """
    testOutput = """
    DA
DA
NE
NE
NE
DA
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    1
a*a
a
    """
    testOutput = """
    NE
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    1
    aw*dqwed
    awcddqwed
    """
    testOutput = """
    DA
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)

    testInput = """
    1
    a*b
abb
    """
    testOutput = """
    DA
    """
    self.appendTest(testInput=testInput,testOutput=testOutput)