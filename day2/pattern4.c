#include <stdio.h>

int main(){
//	printf("%-*.*s\n", 20,10,"Sunil is sooo handsome!");
	char str[100];
	int len;
	scanf("%s%n",str, &len);
	for (int i = 1; i<=len; i++)
		printf("%.*s\n",i,str);

//printf("%-10d", 123);
	return 0;
}