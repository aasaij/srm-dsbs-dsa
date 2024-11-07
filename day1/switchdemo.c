//1 --> It's Monday. Get ready for work
//2,3,4 -> It's week day. concentrate  on work
//5 --> It's Friday. Get ready for week end
//6, 7 --< Enjoy the week end
//else --> invalid daY NUMBER
#include <stdio.h>
int main(){
	int day;
	scanf("%d", &day);
	switch(day){
		default:
			printf("Invalid day number!"); break;
		case 1:
			printf("It's Monday. Get ready for work"); break;
		case 2 ... 4:
			printf("It's week day. concentrate  on work"); break;
		case 5:
			printf("It's Friday. Get ready for week end"); break;
		case 6: case 7:
			printf("Enjoy the week end");
	}
}