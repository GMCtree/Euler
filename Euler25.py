term = 1
count = 0
num_count = 0
currentfib = 0

def Fibonacci(term):
	num1 = 0
	num2 = 1
	fib = None
	for number in xrange(1,term+1):
		fib = num1 + num2
		num1 = num2
		num2 = fib
	return fib

def NumberCount(num):
	return len(repr(abs(num)))

while (num_count <= 1000):
	currentfib = Fibonacci(term)
	num_count = NumberCount(currentfib)
	term += 1
print term