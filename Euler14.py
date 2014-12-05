def collatz(n):
	count = 1
	while n > 1:
		if (n % 2) == 0:
			n = n/2
		else:
			n = n*3 + 1
		count += 1
	return count

biggestchain = 0 #keeps track of largest chain
largest = 0 #keeps track of number with the largest chain
currentnum = 1 #current number under 1 million
thischain = 0 #chain of current number

while currentnum < 1000000:
	thischain = collatz(currentnum)
	if thischain > biggestchain:
		biggestchain = thischain
		largest = currentnum
	currentnum += 1
print largest
