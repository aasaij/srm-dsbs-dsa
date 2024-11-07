#include <stdio.h>
typedef struct Flag {// bit fields
	int x : 4;
	int y : 3;
	int z : 2;
}flag;

int main(){
	flag f = {16,7, 2};
	printf("%d %d %d", f.x, f.y, f.z);
	return 0;
}