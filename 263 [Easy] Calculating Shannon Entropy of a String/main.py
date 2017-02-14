import math
def getEntropy(somestring):
    baseent=0.0
    lettersinthing=set(somestring)
    print lettersinthing
    for eachletter in lettersinthing:
    	print eachletter
        letent = somestring.count(eachletter)/float(len(somestring))
        letent=letent*math.log(letent, 2)
        baseent+=letent
    return -1*baseent

print getEntropy('Hello, world!')