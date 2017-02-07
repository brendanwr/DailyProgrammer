# [2016-12-05] Challenge #294 [Easy] Rack management 1
# https://www.reddit.com/r/dailyprogrammer/comments/5go843/20161205_challenge_294_easy_rack_management_1/
def scrabble(word, letters):
	for i,x in enumerate(word):
		if set(x) & set(letters):
			letters = letters.replace(x, "", 1)
		else:
			return False
	return True

print scrabble("daily", "ladilmy")
print scrabble("eerriin", "eerie") 
print scrabble("orrpgma", "program")
print scrabble("orppgma", "program")

