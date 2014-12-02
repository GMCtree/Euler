def check_euler(a, b, c):
	if (a + b + c == 1000):
		answer = a * b * c
		print answer

def is_pythagorean_triple(a, b, c): #this works
	num1 = a ** 2 + b ** 2
	num2 = c ** 2
	if (a < b and b < c): #checks for pythagorean triple properties
		if (num1 == num2): #also checks for pythagorean triple properties 
			check_euler(a, b, c)

for x in xrange(1, 500):
	a = x
	for y in xrange(1, 500):
		b = y
		for z in xrange(1, 500):
			c = z
			is_pythagorean_triple(a, b, c)
			
