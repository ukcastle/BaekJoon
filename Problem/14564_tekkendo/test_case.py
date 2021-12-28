class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,q,a):
    self.append((q,a))
  
  def addTestCase(self):
    q = """
    6
    10 20
    2 7
    15 62
    10 37
    11 50
    34 59
    """
    a = """
    3
    3
    4
    4
    5
    25
    """
    self.appendTest(q=q,a=a)


