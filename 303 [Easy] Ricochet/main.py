# [2017-02-21] Challenge #303 [Easy] Ricochet
# // https://www.reddit.com/r/dailyprogrammer/comments/5vb1wf/20170221_challenge_303_easy_ricochet/
def gcd(x, y):
	while(y):
		x,y = y, x% y
	return x

def lcm(x, y):
	lcm = (x*y)//gcd(x,y)
	return lcm

def ricochet(h, w, v):
	c = ""
	l = lcm(h, w)
	t = l // v
	b = l//w - 1 + l//h - 1 

	if (l//h %2 == 0):
		c += "U"
	else:
		c += "L"

	if(l//w %2 == 0):
		c += "L"
	else:
		c += "R"

	print(c,b,t)


ricochet(8,3,1)
ricochet(15,4,2)