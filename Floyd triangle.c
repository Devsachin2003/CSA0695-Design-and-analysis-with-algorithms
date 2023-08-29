#include<stdio.h>
int main(){
	int n,i;
	printf("Enter number of rows:");
	scanf("%d",&n);
    int number=1;
    for(int i=1;i<n+1;i++){
    	for(int j=1;j<i+1;j++){
    		printf("%d ",number);
    		number+=1;
		}
		printf("\n");
	}
}