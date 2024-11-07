//Program to display day of Date
#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int y){
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
bool isValid(int d, int m, int y){
	if ( d > 31 || d < 1 || m > 12 || m < 1 || y < 1900)
		return false;
	else{
		switch(m){
			case 4: case 6: case 9: case 11:
				if ( d> 30) return false;
				break;
			case 2:
				if (isLeapYear(y)){
					if ( d > 29)
						return false;
				}
				else if (d > 28) return false;
		}  
		return true;
	}
}
int getDayOfWeek(int d, int m, int y){
	if (isValid(d,m,y)){

		int f, D, C;
		if ( m==1 || m == 2){
			m+=10;
			y--;
		}
		else
			m-=2;
		D = y % 100;
		C = y / 100;					
		f = (d + (13 * m- 1)/5 + D + D / 4 + C/4 - 2 * C)%7;
		if ( f < 0)
			f+=7;
		return 	f;
	}
	else
		return -1;
}
int main(){
	int dd, mm, yy;
	scanf("%d/%d/%d", &dd, &mm, &yy);
	char days[][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};	
	int day = getDayOfWeek(dd, mm, yy);
	if (day != -1)
		printf("%s", days[day]);
	else
		printf("Invalid Date!");
	return 0;
}