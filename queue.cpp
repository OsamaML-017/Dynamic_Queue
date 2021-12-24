#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *front=NULL;
struct node *rear=NULL;

void queue();
void unqueue();
void traverse();

int main(){
    int choice;
    do{
        printf("\n\n---------------------------------------------------------------------------\n");
        printf("************************* QUEUE OPERATIONS ********************************\n");
        printf("---------------------------------------------------------------------------\n");
        printf("Select one of the following operations to do on the stack.\n");
        printf("1.Queue\n");
        printf("2.Unqueue\n");
        printf("3.Traverse\n");
        printf("4.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        printf("\n");
        switch(choice){
            case 1: 
                queue();
                break;
            case 2:
                printf("\n\nThe Unqueue command is given\n");
                unqueue();
                break;
            case 3:
                traverse();
                break;
            case 4:
                return 0;
                break;
            default:
                printf("\n\ninvalid input please enter a valid choice i.e, 1-4\n\n");
        }
    }while (1);
    return 0;

}

void queue(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(node));
    
    printf("Enter the element to be inserted: ");
    scanf("%d",&temp->data);
    if(front==NULL){
        temp->next=NULL;
        front=temp;
        rear=temp;
    }
    else{
        temp->next=NULL;
        rear->next=temp;
        rear=temp;
    }
}
void unqueue(){
    if(front==NULL)
        printf("\nBut The Queue is empty :(\n");
    else{
        struct node* temp;
        printf("\n\nUnqueued element is %d\n",front->data);
        temp=front;
        front=front->next;
        free(temp);
    }
}
void traverse(){
    if(front==NULL)
        printf("\nBut The Queue is empty :(\n");
    else{
        struct node* temp;
        printf("Queue elements are: \n\n");
        temp=front;
        printf("%d\n",temp->data);
        while(temp->next != NULL)
        {
            temp=temp->next;
            printf("%d\n",temp->data);
        }
    }
}