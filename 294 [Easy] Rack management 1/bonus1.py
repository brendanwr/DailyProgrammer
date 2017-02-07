# [2016-12-05] Challenge #294 [Easy] Rack management 1
# https://www.reddit.com/r/dailyprogrammer/comments/5go843/20161205_challenge_294_easy_rack_management_1/
def scrabble(letters,word):
	for i,x in enumerate(word):
		if set(x) & set(letters):
			letters = letters.replace(x, "", 1)
		elif set(letters) & set("?"):
			letters = letters.replace("?", "", 1)
		else:
			return False
	return True

print scrabble("pizza??", "pizzazz") 
print scrabble("piizza?", "pizzazz") 
print scrabble("a??????", "program") 
print scrabble("b??????", "program") 

