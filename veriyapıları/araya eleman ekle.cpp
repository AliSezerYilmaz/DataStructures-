
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void dugumSil(struct node **head){
	struct node *ptr=*head;
	(*head)=ptr->next;
	ptr->next=NULL;
	free(ptr);
}
void  silme(struct node *ptr,int x){
	struct node *prev_node;
	while(ptr->next->data!=x){
		ptr=ptr->next;
	}
	prev_node=ptr;
	struct node *silinen=prev_node->next;
	free(silinen);
}
int main(){
	struct node *dugum1,*dugum2,*dugum3;
	dugum1=(struct node*)malloc(sizeof(struct node));
	dugum2=(struct node*)malloc(sizeof(struct node));
	dugum3=(struct node*)malloc(sizeof(struct node));
	dugum1->data=10; dugum2->data=20; dugum3->data=30;
	dugum1->next=dugum2; dugum2->next=dugum3; dugum3->next=NULL;
	printf("node buyuklugu=%d\n",sizeof(dugum1->data));
	printf("dugum1 adresi %u\n",dugum1);
	printf("dugum2 adresi %u\n",dugum2);
	printf("dugum3 adresi %u\n",dugum3);
	//silme(dugum2,30);
	dugumSil(&dugum1);
	struct node *ptr;
	ptr=dugum1;
	int lenght=0;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	lenght++;
	}
	printf("eleman sayisi %d",lenght);
	
	lenght=0;
	getche();
	return 0;
	
}
