#include <stdio.h>
#include <math.h>

long long int nextTriangleNumber(long long int);
int divisorCount(long long int);

int main() {

	int div_count = 0;
	long long int current_triangle_num = 1;
	long long int num = 0;

	while (div_count < 500) {
		num = nextTriangleNumber(current_triangle_num++);
		div_count = divisorCount(num);
		// if (div_count != 0 && div_count > 100)
		// 	printf("Num: %lld -- Count: %d\n", num, div_count);
	}
	printf("%d\n", div_count);
	printf("%lld\n", num);

	return 0;
}

long long int nextTriangleNumber(long long int currentcount) {
	return (currentcount * (currentcount + 1)) / 2; //returns the summation (which is the next triangle number)
}

int divisorCount(long long int currentnum) {
	int count = 0;
	long long int i;
	for (i = 1; i <= sqrt(currentnum); i++) {
		if (currentnum % i == 0)
			count+=2;
	}
	return count;
}