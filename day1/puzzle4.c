#include <stdio.h>

int main(){
	char x = -10;
	int y ;
	y = x + !x + ~x+ ++x;
	//y = -6 + 0 + 5 + (-5)
	printf("%d", y);
	return 0;
}
//-(x+1) ==> ~x

//	0000 0000
//  1111 0110
    0000 1001
    
    
