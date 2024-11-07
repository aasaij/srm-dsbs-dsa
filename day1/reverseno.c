//Program to reverse a number
#include <stdio.h>

int main(){
	long long int x,n=0;
	int len;
	scanf("%lld%n", &x, &len);
	while(n = n * 10 + x % 10,x /= 10);
	printf("%0*lld",len, n);
	return 0;
}