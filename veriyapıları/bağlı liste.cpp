#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
//araya eleman eklemek için kullanýlýr
void insertAfter(struct node *prew_node , int x){
	
	struct node *yeni = (struct node*)malloc(sizeof (struct node));
	yeni->data=x;
	yeni->next=prew_node->next;
	prew_node->next=yeni;
}
//push fonksyonu baþa eleman eklemek için kullanýlýr
void push(struct node **head_ref,int x){
	struct node *yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data=x;
	yeni->next=(*head_ref);
	(*head_ref) = yeni;
}
//sona eleman eklemek için kullanýlýr
void sonaEkle(struct node *head_ref,int x){
	struct node *yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data =x;
	struct node *ptr;
	ptr = head_ref;
	while (ptr->next!=NULL){
		ptr = ptr->next;
	}
	ptr->next=yeni;
	yeni->next=NULL;
}
int main(){
	struct node *dugum1,*dugum2,*dugum3;
	dugum1=(struct node*)malloc(sizeof(struct node));
	dugum2=(struct node*)malloc(sizeof(struct node));
	dugum3=(struct node*)malloc(sizeof(struct node));
	dugum1->data=10; dugum2->data=20; dugum3->data=30;
	dugum1->next=dugum2; dugum2->next=dugum3; dugum3->next=NULL;
	push(&dugum1,31);
	insertAfter(dugum2,45);
	sonaEkle(dugum1,54);
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
