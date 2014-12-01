#include <stdio.h>

int checkDivide(int);

int main(){

	int num = 0;

	while(1){
		num++;
		if(checkDivide(num) == 1)
			break;
	}
	printf("%d\n", num);

	return 0;
}

int checkDivide(int num){

	int i = 1;

	while (i <= 20){
		if(num % i != 0)
			return 0;
		i++;
	}
	return 1;
}