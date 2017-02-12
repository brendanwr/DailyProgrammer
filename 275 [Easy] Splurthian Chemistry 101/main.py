# [2016-07-11] Challenge #275 [Easy] Splurthian Chemistry 101
# https://www.reddit.com/r/dailyprogrammer/comments/4savyr/20160711_challenge_275_easy_splurthian_chemistry/
def chemistry(element, symbol):
	element = element.lower()
	symbol = symbol.lower()

	if len(symbol) != 2:
		return False
	if symbol[0] not in element or symbol[1] not in element: 
		return False
	index = element.index(symbol[0])
	if element[index+1:].find(symbol[1]) == -1:
		return False
	return True

print chemistry('Spenglerium', 'Ee')
print chemistry('Zeddemorium', 'Zr') 
print chemistry('Venkmine', 'Kn') 
print chemistry('Stantzon', 'Zt') 
print chemistry('Melintzum', 'Nn')
print chemistry('Tullium', 'Ty')