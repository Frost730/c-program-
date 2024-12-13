#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void push(int element);
void pop();
void display();
void main(){
int choice,element;
printf("Enter your choice:\n1.PUSH\t2.POP\t3.DISPLAY\n");
do{
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("Enter the element:");
     scanf("%d",&element);
     push(element);
     break;
case 2:pop();
      break;
case 3:display();
      break;
      
default:printf("Enter a valid choice");

}

}while(choice!=4);

}

void push(int element){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=element;
if(top==NULL){
newnode->next=NULL;

}
else{
newnode->next=top;


}
top=newnode;
}

void pop(){
if(top==NULL){
printf("UNDERFLOW!!");

}
else{
struct node *temp=top;
top=top->next;
free(temp);
}
}
void display(){
struct node *temp=top;
while(temp!=NULL){
printf("%d-->",temp->data);
temp=temp->next;
}

}
