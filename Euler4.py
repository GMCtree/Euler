def is_palindrome(num):
	string = repr(num) #converts the current number to a string
	rev = string[::-1] #gets the reverse of the string
	for i in xrange(0, (len(string)+1)/2):
		if (string[i] != rev[i]):
			return False
	return True

greatest = 0
for num1 in xrange(999, 0, -1):
	for num2 in xrange(999, 0, -1):
		result = num1 * num2
		if (is_palindrome(result) == True):
			if (result > greatest):
				greatest = result
print greatest
