#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==0&&rear==0){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    struct node *temp;
    if(front==0&&rear==0){
        printf("%d",temp->data);
    }
    else{
        temp=front;
        printf("Dequeued Element is %d",front->data);
        front=front->next;
        free(temp);
        printf("\n");
    }
}
void peek(){
    if(front==0&&rear==0){
        printf("Queue is empty");
    }
    else{
        printf("Top element is %d\n",front->data);
    }
}
void display(){
    struct node *temp;
    if(front==0&&rear==0){
        printf("Queue is Empty");
    }
    else{
        temp=front;
        printf("Queue Element is ");
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    peek();
    display();
}