#include<stdio.h>
int main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int count=0;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			count+=1;
		}
	}
	if(count>1){
		printf("not a prime number!");
	}
	else{
		printf("prime number!");
	}
	
	return 0;
}