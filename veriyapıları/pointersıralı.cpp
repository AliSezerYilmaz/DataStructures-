# include <stdio.h>
#include <conio.h>

int main(){
	int a=2,*b,**c,***d,****e;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	
	
	printf("\na nin içindeki%d\na nin adresi %u",a,&a);
	printf("\nb nin icindeki %d \nb nin adresi %u",b,&b);
	printf("\nd nin icindeki deger %d",e);
}
