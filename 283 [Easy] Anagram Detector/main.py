# [2016-09-12] Challenge #283 [Easy] Anagram Detector
# https://www.reddit.com/r/dailyprogrammer/comments/52enht/20160912_challenge_283_easy_anagram_detector/

def anagram(s1, s2):
	print '"' + s1 + '" is',
	if ''.join(sorted(s1.replace(" ","").lower())) != ''.join(sorted(s2.replace(" ","").lower())):
		print 'NOT',
	print 'an anagram of "' + s2  + '"'


anagram("Clint Eastwood", "Old West Action")
anagram("parliament", "partial man")
anagram("wisdom", "mid sow")
anagram("Seth Rogan", "Gathers No")
anagram("Reddit", "Eat Dirt")
anagram("Schoolmaster", "The classroom")
anagram("Astronomers", "Moon starer")
anagram("Vacation Times", "I'm Not as Active")
anagram("Dormitory", "Dirty Rooms")