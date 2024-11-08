#include <stdio.h>
#include <string.h>
//struct Student {
//	int rollno;
//	char name[30];
//	double cgpa;	
//};
//
//struct Student {
//	int rollno;
//	char name[30];
//	double cgpa;	
//}s1, s2,s3;
//
//struct {
//	int rollno;
//	char name[30];
//	double cgpa;	
//}s1,s2,s3;

typedef struct {
	int rollno;
	char name[30];
	double cgpa;
}student;

int main(){
	student s[10];
//	stu student; 
//	Student student;
//	student.rollno = 1001;
//	strcpy(student.name,"Mayukh");
//	student.cgpa  = 10.0;	
//	student s = {.cgpa = 10.0,.name = "Mayukh", .rollno = 101};
//	student s1
//	printf("%d", s.rollno);
//	printf("\n%.2lf\n",s.cgpa);
//	puts(s.name);
//	puts("You are very very silent!");
//	puts("You are very interactive!");
	return 0;
}