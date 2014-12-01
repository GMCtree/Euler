/* 
*
*
*

INCOMPLETE 

*
*
*/
#include <stdio.h>

long int Fibonacci();
long int Count(long int);

int main(){

	long int answer = Fibonacci();

	return 0;
}

long int Fibonacci(){

	long int num1 = 0, num2 = 1, fib, num = 0;
	int count = 0;
	do{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		count = Count(fib);
		num++;
	}while (count < 1000);
	return num;
}

long int Count(long int num){
	long int count = 0;
	while(num > 0){
		num = num / 10;
		count++;
	}
	return count;
}