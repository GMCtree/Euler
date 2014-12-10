program Euler2
	integer*4:: total = 0 !declare the variables as 4-byte integers
	integer*4:: num1 = 0
	integer*4:: num2 = 1
	integer*4:: fib = 0

	do while (fib < 4000000)
		fib = num1 + num2
		if (modulo(fib, 2) == 0) then !check if current fib is even
			total = total + fib
		end if
		num1 = num2
		num2 = fib
	end do
	print *, total
end program Euler2
