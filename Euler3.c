#include <stdio.h>
#include <math.h>

int checkPrime(long int);

int main(){

	long int i, greatest = 0;
	long int bestaround = 600851475143;

	for (i = 2; i < sqrt(bestaround); i++){
		if (bestaround % i == 0)
			if(checkPrime(i) == 1){
				greatest = i;
			}
	}
	printf("%lu\n", greatest);
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