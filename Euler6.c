#include <stdio.h>
#include <math.h>

int sumOfSquares();
int squareOfSums();

int main(){
	
	int sum_square, square_sum, difference;

	sum_square = sumOfSquares();
	square_sum = squareOfSums();
	difference = square_sum - sum_square;
	printf("%d\n", difference);

	return 0;
}

int sumOfSquares(){
	int i, sum = 0;

	for (i = 1; i <= 100; i++){
		sum += pow(i,2);
	}
	return sum;
}

int squareOfSums(){
	int i, square = 0;

	for (i = 1; i <=100; i++){
		square += i;
	}
	return pow(square, 2);
}