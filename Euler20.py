def fact(num):
	factorial = 1
	for x in xrange (num, 0, -1):
		factorial *= x
	return factorial

num = fact(100)
string = str(num)
total = 0
for x in string:
	total += int(x)
print total
