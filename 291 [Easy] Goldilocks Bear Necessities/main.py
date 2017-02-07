# [2016-11-07] Challenge #291 [Easy] Goldilocks' Bear Necessities
# https://www.reddit.com/r/dailyprogrammer/comments/5bn0b7/20161107_challenge_291_easy_goldilocks_bear/

with open("input.txt", "r") as ins:
    array = []
    for line in ins:
        array.append(line.strip('\n').split(' '))
	weights, temp = zip(*array)

w = int(weights[0])
t = int(temp[0])

for (i, x) in enumerate(weights[1:], start=1):
	if(w <= int(x)) and (t >= int(temp[i])):
		print i