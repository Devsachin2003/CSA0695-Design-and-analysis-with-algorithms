#include<stdio.h>
int main(){
	char a[100];
	printf("Enter string:");
	scanf("%s",&a);
	int n=strlen(a);
	printf("The length of the string is:%d",n);
	return 0;
	

}