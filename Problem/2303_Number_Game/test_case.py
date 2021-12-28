class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,q,a):
    self.append((q,a))
  
  def addTestCase(self):
    q = """
    3
    7 5 5 4 9
    1 1 1 1 1
    2 3 3 2 10
    """
    self.appendTest(q=q, a=1)

    q = """
    2
    1 1 1 1 1
    1 1 1 1 1
    """
    self.appendTest(q=q, a=2)
