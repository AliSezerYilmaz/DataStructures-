#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void cevrimeDonustur(struct node *head){
	struct node *ptr = head;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=head;
}
void printcevrim(struct node *head){
	struct node *ptr=head;
	do{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	} while(ptr!=head);
}
void cevrimEkle(struct node *head,int x){
	struct node *yeni =(struct node*)malloc(sizeof(struct node));
	yeni->data=x;
	struct node *ptr=head;
	while(ptr->next!=head)
	ptr=ptr->next;
	yeni->next=ptr->next;
	ptr->next=yeni;
}
void cevrimSil(struct node **head){
	struct node *ptr=*head;
	while(ptr->next!=(*head)){	
	ptr=ptr->next;
}
	(*head)=ptr->next->next;
	struct node *silinecek=ptr->next;
	ptr->next=ptr->next;
	free(silinecek);
}
main(){
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
	cevrimeDonustur(dugum1);
	cevrimEkle(dugum3,66);
	
	printcevrim(dugum1);
	struct node *ptr;
	ptr=dugum1;
	int lenght=0;
	getche();
	return 0;
	
}
