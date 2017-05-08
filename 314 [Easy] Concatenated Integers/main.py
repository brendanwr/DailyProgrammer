def concatenated(nums):
	nums = sorted(nums,key=str)
	for i,v in enumerate(nums[:-1]):
		if str(v)[0] == str(nums[i+1])[0]:
			if avg(str(v)) > avg(str(nums[i+1])):
				nums[i], nums[i+1] = nums[i+1],nums[i]
	

	small = ''
	for i in nums:
		small += str(i)
	print(small)

	large = ''
	for i in reversed(nums):
		large += str(i)
	print(large)


def avg(n):
	n = int(n)
	num = n
	size = len(str(n))
	r = 0
	while n:
		r, n = r + n % 10, n // 10
	return r/size



concatenated([79, 82, 34, 83, 69])
concatenated([420, 34, 19, 71, 341])
concatenated([17, 32, 91, 7, 46])