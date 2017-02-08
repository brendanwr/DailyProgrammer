# [2016-10-03] Challenge #286 [Easy] Reverse Factorial
# https://www.reddit.com/r/dailyprogrammer/comments/55nior/20161003_challenge_286_easy_reverse_factorial/

def reverse_fact(num):
	print num,
	for x in xrange(2,num):
		num = float(num/x)
		if num == 1:
			return ' = ' + str(x) + '!'
		elif num < 1:
			return 'NONE'

print(reverse_fact(120))
print(reverse_fact(150))
print(reverse_fact(3628800))
print(reverse_fact(479001600))
print(reverse_fact(6))
print(reverse_fact(18))
