#include <stdio.h>
#include <math.h>

int checkPrime(long int);

int main(){

	long int sum = 0, i;

	for (i = 2; i < 2000000; i++){
		if(checkPrime(i) == 1)
			sum += i;
	}
	printf("%lu\n", sum);

	return 0;
}

int checkPrime(long int num){

	long int i;

	for (i = 2; i <= sqrt(num); i++){
		if(num % i == 0)
			return 0;
	}
	return 1;
}	