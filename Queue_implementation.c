#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* enqueue(struct node* head)
{
    struct node* n; int data;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &data);
    n->data=data;
    n->next=head;
    return n;
}
struct node* dequeue(struct node* head)
{
    struct node* temp=head;struct node* prev;
    while(1)
        {
            if(temp==NULL)
            {
                printf("The queue is empty.\n\n");
                return head;
            }
            if (temp->next==NULL)
            {
                temp=NULL;
                prev->next=NULL;
                return head;
            }
            prev=temp;
            temp=temp->next;
        }
    
}
void display(struct node* head)
{
    struct node* temp=head;
    printf("\n\nQueue is:\n");
    while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
}
int main() {
    struct node* head=NULL;
    int ch;
    do{
        printf("Queue operations:\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
            {
                case 1:
                head=enqueue(head);
                break;
                case 2:
                head=dequeue(head);
                break;
                case 3:
                display(head);
                break;
                default:
                printf("INVALID OPERATION.\n\n");
                break;   
            }
    }while(ch!=4);
    display(head);
    return 0;
}











