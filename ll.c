#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head=NULL;

void insert();
void search(int key);
void display();
void main(){
int choice,key,value;
printf("\n1.INSERT \n2.SEARCH \n3.DISPLAY:");
do{
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:insert();
      break;
case 2:printf("Enter the key to search:");
      scanf("%d",&key);
     search(key);
     break;
case 3:display();
      break;
}
}while(choice!=4);



}
void insert(){
int element;
printf("Enter value:");
scanf("%d",&element);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=element;
newnode->next=NULL;
if(head==NULL){
head=newnode;
}
else{
struct node *tmp=head;
while(tmp->next!=NULL){
tmp=tmp->next;
}
tmp->next=newnode;
}
}
void search(int key){
struct node *tmp=head;
while(tmp!=NULL){
if(tmp->data==key){
printf("Element found");
break;
}else{
tmp=tmp->next;
}

}

}

void display(){
struct node *tmp=head;
while(tmp!=NULL){
printf("%d-->",tmp->data);
tmp=tmp->next;
}
}
