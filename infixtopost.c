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
char pop(){
return(s[top--]);
}
int precedence(char x){
if(x=='('){
return 0;

}
if(x=='+'||x=='-')
return 1;
if(x=='*'||x=='*')
return 2;
if(x=='^')
return 3;
}

void infixtopost(char *infix,char *postfix){
int i=0,k=0;
char ch;
while(infix[i]){
if(isalnum(infix[i])){
postfix[k++]=infix[i];

}
else if(infix[i]=='('){
push(infix[i]);
}
else if(infix[i]==')'){
while((ch=pop())!='('){
postfix[k++]=ch;

}
}
else{
while(top!=-1&&precedence(s[top])>=precedence((infix[i]))){
postfix[k++]=pop();
}
push(infix[i]);
}
i++;
}
while(top!=-1){
postfix[k++]=pop();
}
postfix[k]='\0';
}
int main(){
char infix[50],postfix[50];
printf("Enter the infix expression:");
scanf("%s",infix);
infixtopost(infix,postfix);
printf("The postfix expression after evaluation:%s",postfix);



}
