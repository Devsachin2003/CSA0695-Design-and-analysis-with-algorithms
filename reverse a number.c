#include<stdio.h>
int main(){
	int num,n=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0){
		int rem=num%10;
		n=n*10+rem;
		num=num/10;
	}
	printf("The reversed number is:%d",n);
	return 0;
}