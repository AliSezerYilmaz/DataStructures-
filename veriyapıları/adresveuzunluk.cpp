#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *dugum1,*dugum2,*dugum3;
	dugum1=(struct node*)malloc(sizeof(struct node));
	dugum2=(struct node*)malloc(sizeof(struct node));
	dugum3=(struct node*)malloc(sizeof(struct node));
	dugum1->data=10;
	dugum2->data=20;
	dugum3->data=30;
	dugum1->next=dugum2;
	dugum2->next=dugum3;
	dugum3->next=NULL;
	printf("node buyuklugu=%d\n",sizeof(dugum1->data));
	printf("dugum1 adresi %u\n",dugum1);
	printf("dugum2 adresi %u\n",dugum2);
	printf("dugum3 adresi %u\n",dugum3);
	struct node *ptr;
	ptr=dugum1;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	return 0;
	getche();
}
