class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,q,a):
    self.append((q,a))
  
  def addTestCase(self):
    q = """
    2
    3
    bbb
    bwb
    bbb
    6
    --b---
    bbww--
    -bbbw-
    ---bbb
    ---b--
    ------
    """
    a = """
    0
    8
    """
    self.appendTest(q=q,a=a)


