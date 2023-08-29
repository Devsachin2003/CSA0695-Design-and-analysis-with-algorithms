#include<stdio.h>
int main(){
	int num,n,sum;
	printf("Enter number:");
	scanf("%d",&num);
	while(num>0){
		n=num%10;
		sum+=n;
		num/=10;		
	}
	printf("The sum of digits is: %d",sum);
	return 0;
}