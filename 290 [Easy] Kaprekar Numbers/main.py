# [2016-10-31] Challenge #290 [Easy] Kaprekar Numbers
# https://www.reddit.com/r/dailyprogrammer/comments/5aemnn/20161031_challenge_290_easy_kaprekar_numbers/

def kaprekar(r1, r2):
	for x in range(r1,r2+1):
		num = x * x
		num = str(num)
		first, second = num[:len(num)/2], num[len(num)/2:]
		first = first.strip("'")
		if(first != ''):
			first = int(first)
			second = int(second)
			if(first + second == x):
				print x,
	print '\n'

kaprekar(1,45)
kaprekar(2,100)
kaprekar(101,9000)