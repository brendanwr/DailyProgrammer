# [2017-03-27] Challenge #308 [Easy] Let it burn
# https://www.reddit.com/r/dailyprogrammer/comments/61ub0j/20170327_challenge_308_easy_let_it_burn/

house = ["#############/#",
		 "#     |       #",	
		 "#     #       #",	
		 "#     #       #",	
		 "#######       #",	
		 "#     _       #",	
		 "###############"]

coords = [(1,1),(1,2),(1,3),(5,6),(2,4),(1,1),(1,2),(5,5),(5,5),(9,1),(7,5),(2,2)]
broken_arch = "/=_"

def input():
	for y,x in coords:
		burn(x,y)
	print("\n".join(house))	

def burn(x,y):
	c = legend(house[x][y])

	house[x] = house[x][:y] + c + house[x][y+1:]
	
	if c == 'F':
		fire(x,y)
		broken(x,y)
	elif c == 'S':
		broken(x,y)
		if fire_check(x,y):
			house[x] = house[x][:y] + 'F' + house[x][y+1:]


def legend(c):
	if c == 'S':
		return 'F'
	elif c == ' ':
		return 'S'
	else:
		return c

def fire(x,y):

	tbool = False

	if house[x-1][y] == 'S':
		x = x-1
		tbool = True
	elif house[x][y-1] == 'S':
		y = y-1
		tbool = True
	elif house[x][y+1] == 'S':
		y = y+1
		tbool = True
	elif house[x+1][y] == 'S':
		x = x+1
		tbool = True
	
	if tbool:
		house[x] = house[x][:y] + 'F' + house[x][y+1:]
		fire(x,y)

def broken(x,y):
	tbool = False

	if house[x-1][y] in broken_arch:
		x = x-1
		tbool = True
	elif house[x][y-1] in broken_arch:
		y = y-1
		tbool = True
	elif house[x][y+1] in broken_arch:
		y = y+1
		tbool = True
	elif house[x+1][y] in broken_arch:
		x = x+1
		tbool = True
	
	if tbool:
		fire(x,y)
		fire_check(x,y)

def fire_check(x,y):
	if house[x-1][y] == 'F':
		return True
	elif house[x][y-1] == 'F':
		return True
	elif house[x][y+1] == 'F':
		return True
	elif house[x+1][y] == 'F':
		return True
	else:
		return False
	

input()
