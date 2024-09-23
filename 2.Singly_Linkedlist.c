#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head=NULL,*new;

void insertatfront(){
    new=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    int d;
    printf("enter the value to insert at front:");
    scanf("%d",&d);
    new->data=d;
    new->next=head;
    head=new;
}
void insertatend(){
    struct node *temp=head;
    new=(struct node*)malloc(sizeof(struct node));
    int d;
    printf("enter the the value to insert at end:");
    scanf("%d",&d);
    new->data=d;
    new->next=NULL;
    if(new==NULL){
        printf("the memory is not allocated properly");
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
    }
}
void insertatmiddle(){
    new=(struct node*)malloc(sizeof(struct node));
    int d,pos;
    printf("enter the elment to insert by posistion:");
    scanf("%d",&d);
    printf("enter the position:");
    scanf("%d",&pos);
    new->data=d;
    new->next=NULL;
    if(pos==1){
        new->next=head;
        head=new;
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        head=head->next;
    }
    new->next=head->next;
    head->next=new;
}
void deleteatfront(){
    struct node *temp=head;
    if(temp==NULL){
        printf("the list is empty");
    } 
        head=head->next;   
        free(temp);
        return;
}
void deleteatend(){
    struct node *temp=head;
    struct node *prev;
    if(head==NULL){
        printf("the list is empty");
    }
    else
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}
void deleteatmiddle(){
    int pos;
    printf("enter the posistion to delete:");
    scanf("%d",&pos);
    struct node *temp=head;
    struct node *prev;
    for(int i=1;i<pos;i++){
        prev=temp;
        temp=temp->next;
        if(prev->next==NULL){
            printf("cannot delete\n");
            break;
        }
        prev->next=temp->next;
        free(temp);
    }
}
void display(struct node *head){
    if(head==NULL){
        printf("the list is empty");
        return;
    }
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("null\n");
}
int main(){
    insertatfront();
    display(head);
    insertatend();
    display(head);
    insertatmiddle();
    display(head);
    insertatfront();
    display(head);
    deleteatend();
    display(head);
    deleteatmiddle();
    display(head);
    deleteatfront();
    display(head);
}