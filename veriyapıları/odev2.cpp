#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void BastanSil(struct node **head){
		struct node *bas= NULL;
	bas=(*head)->next;
	free(*head);
	bas=(*head);
	
}
void SondanSil(struct node *head){
		struct node *son= (head);
	while(son->next->next!=NULL){
		son=son->next;
	}
	free(son->next);
	son->next=NULL;
}
void sil(struct node **head){
	struct node *ptr=(*head);
	int kontrol=0;
	while(ptr!=NULL){
	kontrol++;
	ptr=ptr->next;}
	if(kontrol%2!=0){
	struct node *bas= (*head);
	BastanSil(&bas);
	}
	else{
	struct node *son= (*head);
	SondanSil(son);
	
	}
}
void printList(struct node *head){
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}

int main(){
	struct node *dugum1,*dugum2,*dugum3,*dugum4,*dugum5,*dugum6,*dugum7,*dugum8,*dugum9;
	dugum1=(struct node*)malloc(sizeof(struct node));   dugum2=(struct node*)malloc(sizeof(struct node));
	dugum3=(struct node*)malloc(sizeof(struct node));	dugum4=(struct node*)malloc(sizeof(struct node));
	dugum5=(struct node*)malloc(sizeof(struct node));	dugum6=(struct node*)malloc(sizeof(struct node));
	dugum7=(struct node*)malloc(sizeof(struct node));	dugum8=(struct node*)malloc(sizeof(struct node));
	dugum9=(struct node*)malloc(sizeof(struct node));	
	dugum1->data=1; dugum2->data=5; dugum3->data=3; dugum4->data=1; dugum5->data=1; dugum6->data=2; dugum7->data=2; dugum8->data=5;
    dugum9->data=32; 
	dugum1->next=dugum2; dugum2->next=dugum3; dugum3->next=dugum4; dugum4->next=dugum5; dugum5->next=dugum6; dugum6->next=dugum7; 
	dugum7->next=dugum8; dugum8->next=dugum9; dugum9->next=NULL;
	printList(dugum1);
	printf("////////////////////");
	sil(&dugum1);
	printList(dugum1);
   
}
