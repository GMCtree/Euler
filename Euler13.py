f = open("Euler13num.txt", "r")
total = 0
for line in f: #this loops sums all of the numbers from the file
	total += long(line)
string = str(total)
i = 0
first10 = ""
while i < 10: #this loop gets the first 10 digits of the number
	first10 = first10 + string[i]
	i+=1
print first10
f.close()


