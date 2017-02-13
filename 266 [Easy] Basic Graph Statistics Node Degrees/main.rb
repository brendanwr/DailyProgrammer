# [2016-05-09] Challenge #266 [Easy] Basic Graph Statistics: Node Degrees
# https://www.reddit.com/r/dailyprogrammer/comments/4ijtrt/20160509_challenge_266_easy_basic_graph/
#!/usr/bin/ruby

input = File.read('input.txt').split(' ').map(&:to_i)
count = Array.new(input[0]+1,0)

for i in 1..input.length-1
	count[input[i]] +=1
end

for i in 1..input[0]
	print "Node #{i} has a degree of #{count[i]} \n"
end


