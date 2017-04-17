# [2017-04-17] Challenge #311 [Easy] Jolly Jumper
# https://www.reddit.com/r/dailyprogrammer/comments/65vgkh/20170417_challenge_311_easy_jolly_jumper/
def jolly(row):	
	nrow = []
	nrow.extend(range(1,row[0]))

	for i,v in enumerate(row[1:-1]):
		if abs(row[i+1]-row[i+2]) not in nrow:
			return 'NOT JOLLY'
		else:
			nrow.remove(abs(row[i+1]-row[i+2]))

	if not nrow:
		return 'JOLLY'
	else:
		return 'NOT JOLLY'

print(jolly([4, 1, 4, 2, 3]))
print(jolly([5, 1, 4, 2, -1, 6]))
print(jolly([4, 19, 22, 24, 21]))
print(jolly([4, 19, 22, 24, 25]))
print(jolly([4, 2, -1, 0, 2]))
