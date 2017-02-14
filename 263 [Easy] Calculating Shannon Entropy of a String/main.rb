# [2016-04-18] Challenge #263 [Easy] Calculating Shannon Entropy of a String
# https://www.reddit.com/r/dailyprogrammer/comments/4fc896/20160418_challenge_263_easy_calculating_shannon/


def entropy(str)
	sum = 0
  count_words(str).each do |key, value|
    sum += (value/str.length) * Math::log(value/str.length,2)
  end
  puts -1*sum
end

def count_words(string)
  words = string.split('')
  frequency = Hash.new(0)
  words.each { |word| frequency[word.downcase] += 1.0 }
  return frequency
end

entropy('122333444455555666666777777788888888')
entropy('563881467447538846567288767728553786')
entropy('https://www.reddit.com/r/dailyprogrammer')
entropy('int main(int argc, char *argv[])')