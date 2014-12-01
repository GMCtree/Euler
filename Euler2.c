#include <stdio.h>

long int Fibonacci();

int main(){

	long int total = Fibonacci();
	printf("%lu\n", total);


	return 0;
}

long int Fibonacci(){

	long int num1 = 0, num2 = 1, fib, sum = 0;

	do{
		fib = num1 + num2;
		if(fib % 2 == 0)
			sum += fib;
		num1 = num2;
		num2 = fib;
	}while (fib < 4000000);

	return sum;
}