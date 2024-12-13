#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 50
int s[MAX];
int top=-1;
void push(int x){
top++;
s[top]=x;
}
int pop(){
return(s[top--]);
}
int main(){
int op1,op2,i=0;
char ch,pofx[50];
printf("Enter the postfix expression\n");
scanf("%s",pofx);
while((ch=pofx[i++])!='\0'){
if(isdigit(ch)) push(ch- '0');
else{
op2=pop();
op1=pop();
switch(ch){
case '+':push(op1+op2);
         break;
case '-':push(op1-op2);
         break;
case '*':push(op1*op2);
         break;
case '/':push(op1/op2);
         break;

}

}

}
printf("Postfix expression:%s",pofx);
printf("After evaluation:%d",s[top]);
return 0;
}
