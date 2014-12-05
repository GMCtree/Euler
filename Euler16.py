num = 2 ** 1000
string = repr(num)
total = 0
for x in string:
	if x != "L": #this is dirty
		total += int(x)
print total
