# [2016-05-16] Challenge #267 [Easy] All the places your dog didn't win
# https://www.reddit.com/r/dailyprogrammer/comments/4jom3a/20160516_challenge_267_easy_all_the_places_your/
#!/usr/bin/ruby

def place(num)
	for i in 1..100
		if i != num
			print i 
			if i%10 == 1
				puts 'st'
			elsif i%10 == 2
				puts 'nd'
			elsif i%10 == 3
				puts 'rd'
			else
				puts 'th'
			end
		end
	end
end

place(3)