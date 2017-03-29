# [2015-02-16] Challenge #202 [Easy] I AM BENDER. PLEASE INSERT GIRDER.
# http://www.reddit.com/r/dailyprogrammer/comments/2w84hl/20150216_challenge_202_easy_i_am_bender_please/
from __future__ import print_function

def bender(b):
	if len(b) <= 0:
		return
	print((chr(int(b[:8],2))),end='')
	bender(b[8:])

with open('input.txt') as f: binary=f.read().replace("\n","")
bender(binary)
print()