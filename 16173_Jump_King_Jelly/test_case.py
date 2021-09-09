class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,q,a):
    self.append((q,a))
  
  def addTestCase(self):
    q = """
    3
    1 1 10
    1 5 1
    2 2 -1
    """
    a = """
    HaruHaru
    """
    self.appendTest(q=q,a=a)

    q = """
    3
    2 2 1
    2 2 2
    1 2 -1
    """
    self.appendTest(q=q,a="Hing")

    q = """
    3
    2 2 0
    2 2 2
    0 2 -1
    """
    self.appendTest(q=q,a="Hing")


