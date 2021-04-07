#include <stdio.h>
#include <conio.h>

int main(){
	int arr[]={1,2,3,4,5,6,7};
	int *ip;
	ip =arr;
	//ip++;
	printf("ip degeri= %u\n",ip);
	printf(" elemanin adresi= %u\n",&arr[1]);
	
}
