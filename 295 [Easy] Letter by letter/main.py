# [2016-12-12] Challenge #295 [Easy] Letter by letter
# https://www.reddit.com/r/dailyprogrammer/comments/5hy8sm/20161212_challenge_295_easy_letter_by_letter/

w1 = raw_input("Enter first word: ")
w2 = raw_input("Enter second word: ")
print(w1)
for i,x in enumerate(w1):
	if (w2[i] != x):
		print(w2[:i+1] + w1[i+1:])	
	
