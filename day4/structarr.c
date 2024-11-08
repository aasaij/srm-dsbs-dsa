#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
typedef struct {
	int rollno;
	char name[30];
	double cgpa;
}student;
void printline(int n){
	for (int i = 1; i<=n; i++)
		printf("*");
	printf("\n");
}
int main(){
	int n;
	student *s;
	scanf("%d", &n);
	s = (student *)malloc(sizeof(student)*n);
//	student s[n];
	for (int i = 0;i <n; i++){
		scanf("%d %s %lf", &s[i].rollno, s[i].name, &s[i].cgpa);
	}
	printline(49);
	printf("SlNo RollNo s%-30s CGPA\n","Student Name");
	printline(49);
	for (int i = 0; i<n; i++)
		printf("%4d %6d %-30s  %5.2lf\n",i+1, s[i].rollno, s[i].name, s[i].cgpa );
	printline(49);		
	return 0;
}
//
//SlNo RollNo  Student Name   CGPA
//1      101      Muyukh         10.0


