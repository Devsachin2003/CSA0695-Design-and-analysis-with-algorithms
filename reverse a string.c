#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int n;
	printf("Enter string:");
	scanf("%s",&s);
	n=strlen(s);
	for (int i=0;i<n-1;i++){
		char temp=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=temp;
	}
	printf("%s",s);
	
	return 0;
}