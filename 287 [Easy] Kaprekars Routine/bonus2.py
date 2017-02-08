# [2016-10-10] Challenge #287 [Easy] Kaprekar's Routine
# https://www.reddit.com/r/dailyprogrammer/comments/56tbds/20161010_challenge_287_easy_kaprekars_routine/
def desc_digits(a,s,v):
	if len(a) == 0:
		return int(s)
	if v == True:
		d = max(a)
	else:
		d = min(a)
	s += str(d)
	a.remove(d)
	return desc_digits(a,s,v)


def kaprekar(num, count):
	if num == 6174:
		print count
		return

	numa = [int(i) for i in str(num).zfill(4)]
	numb = [int(i) for i in str(num).zfill(4)]

	dd = desc_digits(numa, "", True)
	ad = desc_digits(numb, "", False)

	count += 1
	kaprekar(dd-ad, count)

kaprekar(6589,0)
kaprekar(5455,0)
kaprekar(6174,0)