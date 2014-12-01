#include <stdio.h>
#include <math.h>

int checkPrime(long int);

int main(){

	int count = 0, i = 2;

	while(1){
		if(checkPrime(i) == 1)
			count++;
		if(count == 10001)
			break;
		i++;
	}
	printf("%d\n", i);

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