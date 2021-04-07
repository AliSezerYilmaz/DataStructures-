#include <stdio.h>
#include<conio.h>
void dondur(int arr[],int n);
void solaDondur(int arr[],int d,int n){
	int i;
	for(i=0;i<d;i++)
	dondur(arr,n);
	
}
void dondur(int arr[],int n){
	int i,temp;
	temp = arr[0];
	for(i=0;i<n-1;i++)
	arr[i] = arr[i+1];
	//arr[i]=temp;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	solaDondur(arr,2,7);
	int i;
	for(i=0;i<7;i++)
	printf("%d.eleman= %d\n",i+1,arr[i]);
	
	getche();
	return 0;	
}
