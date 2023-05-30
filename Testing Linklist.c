#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
struct node* first;
struct node* Newnode(int x){
    struct node*newnode=((struct node*)malloc(sizeof(struct node)));
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}

void main() {
   char c;
    int position,data;
    first = NULL;
    TheEnd(19);
    TheEnd(22);
    TheEnd(27);
    TheEnd(30);
    TheEnd(32);
    TheEnd(39);
    TheEnd(40);
    TheEnd(44);
    TheEnd(49);
    TheEnd(100);
    while (1==1)
    {
        Print();
        printf("If you want to Add Node press(a)\n");
        printf("If you want to Delete Node press(d)\n");
        printf("Input: ");
        scanf(" %c",&c);
        if(c=='a'){
            printf("\nEnter Position :");
            scanf("%d",&position);
            printf("New data :");
            scanf(" %d",&data);
            Add(data,position);
            continue;
        }
        else if(c=='d'){
            printf("Enter position you want to delete : ");
            scanf("%d",&position);
            Delete(position);
            continue;
        }
        else
        {
            break;
        }
    }  
}

void Add(int x ,int n){
    struct node *newnode = Newnode(x);
    struct node *temp = first;
    if(n==1){
        newnode->next=first;
        first=newnode;
        return;
    }
    for(int i = 0; i < n-2; i++){
        temp = temp->next;
    }
    newnode->next=temp->next;
    temp->next = newnode;
}

void Delete(int n) {
    struct node* temp1 = first;
    if(n==1){
        first=temp1->next;
        free(temp1);
        return;
    }
    struct node* temp2 = first;
    for (int i = 0; i < n-1; i++) {
        temp1 = temp1->next;
    }
    for (int i = 0; i < n-2; i++) {
        temp2 = temp2->next;
    }
    temp2->next=temp1->next;
    free(temp1);
}

void Print(){
    struct node *temp =first;
    printf("--------------\n");
    int num=1;
     while(temp != NULL) {
        
        printf("%d = %d \n",num,temp->data);
        temp = temp->next;
        num++;
    }
    printf("\n");
}

void TheEnd(int x){
    struct node *newnode=Newnode(x);
    if(first==NULL){
        first=newnode;
        return;
    }
    struct node* temp = first;
    while(temp->next != NULL) {
    temp = temp->next;
    }
    temp->next = newnode;
}