#include <stdio.h>

double factorial_iter(double n);
double factorial_rec(double n);

int main() {
	double n = 20;

	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);

	printf("Iterative factorial result: %f \nRecursive factorial result: %f \n", result_iter, result_rec);
}

double factorial_iter(double n) {
	double i, result = 1;
	for (i = 1; i <= 20; i++) {
		result = result * i;
		printf("%f\n", result);
	}
	return result;
}

double factorial_rec(double n) {
	if (n <= 1) return 1;
	else return (n * factorial_rec(n - 1));
}

