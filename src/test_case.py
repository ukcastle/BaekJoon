class TestCase(list):

  def __init__(self):
    self.addTestCase()

  def appendTest(self,q,a):
    self.append((q,a))
  
  def addTestCase(self):
    q = """
    
    """
    a = """
    
    """
    self.appendTest(q=q,a=a)


