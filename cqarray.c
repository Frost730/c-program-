#include<stdio.h>
#define MAX 6
int frontc=-1,rearc=-1;
int cqarray[MAX];
void enqueue();
void dequeue();
void display();
void main(){
int choice;
printf("Enter your choice:\n1.Enqueu\t2.Dequeue\t3.Display");
do{
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:enqueue();
      break;
case 2:dequeue();
     break;
case 3:display();
      break;


}
}while(choice!=4);

}

void enqueue(){
int element;
printf("Enter the element:\n");
scanf("%d",&element);
if((rearc+1)%MAX==frontc){
printf("OVERFLOW");
}
else{ 
if(frontc==-1 &&rearc==-1){
frontc=0;
rearc=0;
}
else{
rearc=(rearc+1)%MAX;
}
cqarray[rearc]=element;
}
}
void dequeue(){
int element;
if(frontc==rearc){
printf("Underflow");
}
else{
element=cqarray[frontc];
printf("%d deleted",element);
frontc=(frontc+1)%MAX;
}
}
void display(){
int i=frontc;
do{
printf("%d\t ",cqarray[i]);
i=(i+1)%MAX;

}while(i!=(rearc+1)%MAX);
}
