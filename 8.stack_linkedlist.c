#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int x){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->link=top;
top=newnode;
}
void pop(){
struct node *temp;
temp=top;
if(top==NULL){
    printf("Stack is empty");
    }
else{
    printf("Popped element is %d\n",top->data);
    top=top->link;
    free(temp);
    }    
}
void peek(){
    if(top==NULL){
        printf("Stack is empty");
    }
    else{
        printf("Top element is %d\n",top->data);
        }
}
void display(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("Stack is empty");
        }
    else{
        printf("Stack element is \n");
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->link;
            
            }
        }    
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    pop();
    display();
    push(40);
    push(50);
    peek();
    display();
}
