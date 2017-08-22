/*
   AUTHOR : LIBIN N GEORGE
   DATE   : 17 August 2017
   program to Reverse the order of Linked List(Recursive) using pointers
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int nValue;
    struct node* Next;
};

typedef struct node* nodeptr;

nodeptr CreateNode(int nValue);
void Print(nodeptr Head);
nodeptr ReverseList(nodeptr Head, nodeptr prev);
void free_linkedlist(nodeptr Head);

int main(void)
{
    nodeptr prev ,Tail=NULL, Head=NULL;
    int op=0,nValue;

    while(op!=4)
    {
        printf("1->insertion\n2->printing\n3->Reverse linked list\n4->exit\nEnter the operation no you want to do:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
	        printf("enter the value you want insert to queue");
                scanf("%d",&nValue);
                if(Tail!=NULL)
                {
                    prev=Tail;
                    Tail=CreateNode(nValue);
                    prev->Next=Tail;
                }
                else
                {
                    Tail=CreateNode(nValue);
                    Head=Tail;
                }
                break;
            case 2:
                Print(Head);
                break;
            case 3:
	        Tail = Head;
                Head=ReverseList(Head,NULL);
                break;
            case 4:
                break;
            default:
                printf("ERROR:ENTER VALID OPTION\n");
                break;
        }
    }
    free_linkedlist(Head);
    return 0;
}
//create Node and stores value
nodeptr CreateNode(int nValue)
{
    nodeptr p=NULL;
    p=(nodeptr)malloc(sizeof(struct node));
    if(p!=NULL)
    {
        p->nValue=nValue;
        p->Next=NULL;
        return p;
    }
    else
    {
        printf("ERROR:NO NODE CREATED\n");
        return NULL;
    }
}
//print linked list
void Print(nodeptr Head)
{
    nodeptr nod;
    nod=Head;
    if(nod==NULL)
    {
        puts("ERROR:no elemets to Print");
    }
    else
    {
    while(nod!=NULL)
    {
        printf("%d\n",nod->nValue);
        nod=nod->Next;
    }
    }
}
// Reverse the order of Linked List by Recursion
nodeptr ReverseList(nodeptr Head,nodeptr prev)
{
    nodeptr Next;
    if(Head!=NULL)
    {
        Next=Head->Next;
        Head->Next=prev;
        prev=ReverseList(Next,Head);
    }
    return prev;
}
// Function to free the linked list
void free_linkedlist(nodeptr Head)
{
    nodeptr temp = NULL;
    while(Head!=NULL)
    {
        temp = Head->Next;
	free(Head);
	Head = temp;
    }
}
