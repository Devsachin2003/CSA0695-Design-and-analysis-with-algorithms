#include<stdio.h>
int main(){
	char s[100],cpy[100];
	printf("Enter string:");
	scanf("%s",&s);
	strcpy(cpy,s);
	printf("The copied string is: %s",cpy);
	return 0;
	
}