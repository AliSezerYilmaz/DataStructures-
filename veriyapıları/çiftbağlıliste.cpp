#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
int data;
struct node *next;
struct node *prev;	
};
void arayaEkle(struct node *head , int x,int y){
	struct node *yeni=(struct node*)malloc(sizeof(struct node));
	yeni->data=x;
	yeni->next=yeni->prev=NULL;
	struct node *ptr=head;
	while(ptr!=NULL){
		if(ptr->data==y) break;
		ptr=ptr->next;
	}
	if(ptr==NULL) return;
	yeni->next=ptr->next;
	yeni->prev=ptr;
	ptr->next->prev=yeni;
	ptr->next=yeni;
}
void basaEkle(struct node **head,int x){
	struct node *yeni =(struct node*)malloc(sizeof(struct node));
	yeni->data=x;
	yeni->prev=NULL;
	yeni->next=(*head);
	(*head)->prev=yeni;
	(*head)=yeni;
}
void printList(struct node *head){
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void sonaEkle(struct node *head,int x){
	struct node *yeni =(struct node*)malloc(sizeof(struct node));
	struct node *ptr=head->next->next;
	yeni->data=x;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	yeni->prev=ptr;
	ptr->next=yeni;
	yeni->next=NULL;
	
	
}
int main(){
	struct node *dugum1,*dugum2,*dugum3,*ptr;
	dugum1=(struct node*) malloc(sizeof(struct node));
	dugum2=(struct node*) malloc(sizeof(struct node));
	dugum3=(struct node*) malloc(sizeof(struct node));
	dugum1->data=1; dugum2->data=2; dugum3->data=3;
	dugum1->prev=NULL; dugum1->next=dugum2;
	dugum2->prev=dugum1;dugum2->next=dugum3;
	dugum3->prev=dugum2;dugum3->next=NULL;
printList(dugum1);
	basaEkle(&dugum1,44);
	printf("//////////////////////////////////////\n");
	printList(dugum1);
	arayaEkle(dugum1,8,2);
	printf("//////////////////////////////////////\n");
	printList(dugum1);
	sonaEkle(dugum1,99);
	printf("//////////////////////////////////////\n");
	printList(dugum1);
	ptr=dugum1;
	  while(ptr!=NULL){ 
   printf("dugum datasi = %d\n",ptr->data);
   ptr=ptr->next;

  }
	getche();
	
	return 0;
}
