# [2016-04-04] Challenge #261 [Easy] verifying 3x3 magic squares
# https://www.reddit.com/r/dailyprogrammer/comments/4dccix/20160404_challenge_261_easy_verifying_3x3_magic/

def magic(square)

	if square[0] + square[1] + square[2] != 15
		return false
	elsif square[3] + square[4] + square[5] != 15
		return false
	elsif square[6] + square[7] + square[8] != 15
		return false
	elsif square[0] + square[3] + square[6] != 15
		return false
	elsif square[1] + square[4] + square[7] != 15
		return false
	elsif square[2] + square[5] + square[8] != 15
		return false
	elsif square[0] + square[4] + square[8] != 15
		return false
	elsif square[2] + square[4] + square[6] != 15
		return false
	end
	return true

end


puts magic(Array[8, 1, 6, 3, 5, 7, 4, 9, 2])
puts magic(Array[2, 7, 6, 9, 5, 1, 4, 3, 8])
puts magic(Array[3, 5, 7, 8, 1, 6, 4, 9, 2])
puts magic(Array[8, 1, 6, 7, 5, 3, 4, 9, 2])

