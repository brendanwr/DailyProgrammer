# [2017-03-13] Challenge #306 [Easy] Pandigital Roman Numbers
# https://www.reddit.com/r/dailyprogrammer/comments/5z4f3z/20170313_challenge_306_easy_pandigital_roman/
import re
from bisect import bisect

numbers = [[1,'I'],[4,'IV'],[5,'V'],
			[9,'IX'],[10,'X'],[40,'XL'],
			[50,'L'],[90,'XC'],[100,'C'],
			[400,'CD'],[500,'D'],[900,'CM'],
			[1000,'M']]

def roman(num,org,rom):
	if num <= 0:
		if pandigital(rom):
			print(org,rom)
		return
	k, v = zip(*numbers)
	index = bisect(k, num)
	num = num - numbers[index-1][0]
	if numbers[index-1][1] in rom:
		return
	rom += numbers[index-1][1]
	return roman(num,org,rom)

def pandigital(s):
	if re.search('(?=.*I)(?=.*V)(?=.*X)(?=.*L)(?=.*C)(?=.*D)(?=.*M)', s) is not None:
		return True
	return False


for i in range(1,2001):
	roman(i,i, '')




