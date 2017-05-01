# [2017-05-01] Challenge #313 [Easy] Subset sum
# https://www.reddit.com/r/dailyprogrammer/comments/68oda5/20170501_challenge_313_easy_subset_sum/

def subset(nums):
	if not nums:
		return False

	for i in nums:
		if i < 0:
			if abs(i) in nums:
				return True
		elif i > 0:
			if -i in nums:
				return True
		else:
			return True
	return False

print subset([1, 2, 3])
print subset([-5, -3, -1, 2, 4, 6])
print subset([])
print subset([-1, 1])
print subset([-97364, -71561, -69336, 19675, 71561, 97863])
print subset([-53974, -39140, -36561, -23935, -15680, 0])