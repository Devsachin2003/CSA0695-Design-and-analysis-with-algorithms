#include<stdio.h>
int main()
{
	int  n=0,n1=1,n2,a,i;
	printf("Enter the number of series:");
	scanf("%d",&a);
	printf("%d %d",n,n1);
	for(i=0;i<=a;i++){
		n2=n+n1;
		n=n1;
		n1=n2;
		printf(" %d",n2);
	}
	return 0;
}