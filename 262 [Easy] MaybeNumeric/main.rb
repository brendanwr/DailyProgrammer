# [2016-04-11] Challenge #262 [Easy] MaybeNumeric
# https://www.reddit.com/r/dailyprogrammer/comments/4eaeff/20160411_challenge_262_easy_maybenumeric/

def numeric(str)
	if str =~ /[a-zA-Z]/
		return '(string)'
	else
		return '(number)'
	end
end

puts numeric('123')
puts numeric('44.234')
puts numeric('0x123N')
