#include <stdio.h>

int main(){
//	printf("%-*.*s\n", 20,10,"Sunil is sooo handsome!");
	char str[100];
	int len;
	scanf("%s%n",str, &len);
	for (int i = len; i>=1; i--)
		printf("%-*.*s%*.*s\n", len,i,str,len,i,str);

//printf("%-10d", 123);
	return 0;
}