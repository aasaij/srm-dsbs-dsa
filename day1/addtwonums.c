//Program to add two numbers
#include <stdio.h>

int main(){
	double x, y, sum;
	scanf("%lf %lf", &x, &y);
	sum = x + y;
	if ( sum == (long int)sum)
		printf("%ld", sum);
	else
		printf("%lf", sum);
	return 0;
}