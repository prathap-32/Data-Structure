#include<stdio.h>
#define max 100
int a[max];
int top=-1;
void push(int data){
    if(top==max-1){
        printf("Overflow");
        }
    else{
        top=top+1;
        a[top]=data;
        }}
void pop(){
    if(top==-1){
        printf("Underflow");}
    else{
        top=top-1;
        }    
        
}
void display(){
    printf("Stack Element is \n");
    for(int i=top;i>=0;i--){
        printf("%d",a[i]);  
        printf("\t");         
        }
        printf("\n");
        if(top==-1){
            printf("Stack is empty");} 
        }
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    
}