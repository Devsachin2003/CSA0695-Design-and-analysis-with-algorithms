#include<stdio.h>
int main(){
	int num,rem,c,sum=0;
	printf("Enter number:");
	scanf("%d",&num);
	int n=num;
	while(n!=0){
		rem=n%10;
		int c=rem*rem*rem;
		sum+=c;
		n=n/10;
	}
	if(sum==num){
		printf("Armstrong number!");
	}
	else{
		printf("Not an armstrong number!");
	}
	return 0;
	
}    