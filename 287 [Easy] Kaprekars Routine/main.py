# [2016-10-10] Challenge #287 [Easy] Kaprekar's Routine
# https://www.reddit.com/r/dailyprogrammer/comments/56tbds/20161010_challenge_287_easy_kaprekars_routine/


def desc_digits(a):
	if len(a) == 0:
		print '\n'
		return
	d = max(a)
	print d,
	a.remove(d)
	desc_digits(a)



def largest_digit(num):
	num = str(num).zfill(4)
	first, second = num[:len(num)/2], num[len(num)/2:]
	third, fourth = second[:len(second)/2], second[len(second)/2:]
	first, second = first[:len(first)/2], first[len(first)/2:]
	print 'Digit:'
	print first + " " + second + " " +  third + " " +  fourth
	first = int(first)
	second = int(second)
	third = int(third)
	fourth = int(fourth)
	a = [first, second, third, fourth]
	print 'Largest Digit:' 
	print max(a)
	print 'Descending Order:' 
	desc_digits(a)


largest_digit(1234)
largest_digit(3253)
largest_digit(9800)
largest_digit(3333)
largest_digit(120)