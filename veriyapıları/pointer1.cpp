#include <stdio.h>
#include <conio.h>

int main(){
	int arr[]={1,2,3,4};
	int i,a;
	a=55;
	for(i=0;i<4;i++)
	printf("%d. elemanýn adresi %d\n",i+1,&arr[i]);
	printf("anin adresi %u",&a);
	getche();
	return 0;
}
