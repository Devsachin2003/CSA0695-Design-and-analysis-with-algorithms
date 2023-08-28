#include<stdio.h>
int greatest(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]>max){
			max=arr[i];
		}
		
	}                                                                                                                                                                                                                
	return max;
}
int main(){
	int arr[100],n;
	printf("Enter length of array:");
	scanf("%d",&n);
	printf("Enter array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Largest number is:%d",greatest(arr,n));
}