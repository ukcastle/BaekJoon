testList = []

def appendTest(q,a):
    testList.append((q,a))

appendTest(q=['3','7 5 5 4 9','1 1 1 1 1','2 3 3 2 10'], a=1)
appendTest(q=['2','1 1 1 1 1','1 1 1 1 1'], a=2)

def getTestList():
    return testList