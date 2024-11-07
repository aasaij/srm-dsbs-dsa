#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n==1)
		printf("Neither prime nor composite");
	else{
		for (int i = 2; i<=n/2; i++){
			if ( n % i == 0){
				printf("Not Prime");
				return 0;
			}
		}
		printf("Prime");
	}				
	return 0;
}