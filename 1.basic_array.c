#include<stdio.h>
#define max 5
int currentsize=0;
int isfull(){
    return currentsize>=max;
}
int isempty(){
    return currentsize==0;
}
void insertatfront(int *a,int element){
    if(isfull()){
        printf("Cannot insert");
    }
    else{
        for(int i=currentsize;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[currentsize]=element;
        currentsize+=1;
    }
}
void insertatcentre(int *a,int element,int pos){
        if(isfull()){
            printf("Cannot insert");
        }
        else if(pos>=0 && pos<=currentsize){
            for(int i=currentsize;i>pos;i--){
                a[i]=a[i+1];
            }
            a[currentsize]=element;
            currentsize+=1;
        }
        else{
            printf("Invalid postion");
        }        
}
void insertatend(int *a,int element){
        if(isfull()){
            printf("Cannot insert");
        }
        else{
            a[currentsize]=element;
            currentsize+=1;
        }
}
void delete(int *a){
        if(isempty()){
            printf("cannot delete");
        }
        else{
            for(int i=currentsize;i<max;i--){
                a[i]=a[i+1];
            }
            currentsize+=1;
        }
}
void search(int *a){
        int element;
        printf("Enter en element to search:");
        scanf("%d",&element);
        for(int i=0;i<max;i++){
            if(a[i]==element){
                printf("Element is found in %d position.",i);
            }
        }
}
void display(int *a){
    for(int i=0;i<max;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}
void sort(int *a){
    int temp;
    for(int i=0;i<max;i++){
        for(int j=0;j<max;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int choice,element,pos;
    int a[max]={1,2,3,4,5};
    printf("Enter the currentsize :");
    scanf("%d",&currentsize);
    printf("1.front\n 2.centre\n 3.end\n 4.delete\n 5.search\n 6.display\n 7.sort\n Enter your choice :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter an element to insert :");
            scanf("%d",&element);
            insertatfront(a,element);
            display(a);
            break;
        case 2:
            printf("Enter an element to insert and position :");
            scanf("%d""d",&element,&pos);
            insertatcentre(a,element,pos);
            display(a);
            break;
         case 3:
                printf("Enter an element to insert :");
                scanf("%d",&element);
                insertatend(a,element);
                display(a);
            break;
          case 4:
                printf("Enter an element to delete:");
                scanf("%d",&element);
            delete(a);
            display(a);
            break;
           case 5:
                search(a);
                display(a);
                break;
            case 6:
               
                display(a);
                break;
            case 7:
                sort(a);
                display(a);
                break;
            default:
                printf("invalid option.");
    }
    return 0;
}
 