char* substring(const char str[], int startIndex, int numChars){
	char *temp;
	int i, j;
	temp =(char *) malloc(numChars+1*sizeof(char));
	for (i = startIndex, j =0; str[i] && i<startIndex+numChars; i++, j++)
		temp[j]  = str[i];
	temp[i] = '\0';
	return temp;
}
char *toggleCase(const char str[], int len){
	char *temp = (char*)calloc(len+1 , sizeof(char))	;
 	for(int i=0;str[i]!='\0';i++){
 		if(islower(str[i]))
 		temp[i] = toupper(str[i]);
	 else if(isupper(str[i]))
	 	temp[i] = tolower(str[i]);
	 else
	 	temp[i]	 = str[i];
 	}	
 	return temp;
}
