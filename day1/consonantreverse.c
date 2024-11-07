//input
//education@123
//output
//enutaciod@123
//Program to reverse consonants of string
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool isVowel(char ch){	
	return (strchr("AEIOUaeiou",ch )!=NULL);
}
bool isConsonant(char ch){
	return isalpha(ch) && !isVowel(ch);
}   //x = (x+y) - (y=x)
int main(){
	char str[100];
	int len;
	scanf("%s%n", str, &len);
	for (int i = 0, j= len-1;i<j; i++, j--){
		if(isConsonant(str[i])&&isConsonant(str[j]))
			str[i] = (str[i]+str[j]) - (str[j]=str[i]);
		else if  (isConsonant(str[i])) i--;
		else if  (isConsonant(str[j])) j++;
	}
	puts(str);
	return 0;
}