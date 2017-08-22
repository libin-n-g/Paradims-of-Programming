/*
  Author : Libin N george
  Date   : 17 August 2017
  Program which uses single array to implement 3 stacks.
 */

#include <stdio.h>
#define STACKSIZE 100
#define INCREASETOP(x) (x + 3)
#define DECREASETOP(x) (x - 3)

struct stack
{
    int stk[STACKSIZE * 3];
    int top1; //top for 1 st  stack
    int top2; // top for 2 nd stack
    int top3; // top for 3 rd stack
    int *top; // pointer to top of stack selected by User
};
typedef struct stack STACK;

void push(STACK *s);
int  pop(STACK *s);
void display(STACK *s);

void main ()
{
  int choice, num;
    STACK s;
    s.top1 = -3;
    s.top2 = -2;
    s.top3 = -1;
    while (1)
    {
        printf("Enter the Index of the stack to which you want to do Stack operations  (choose from 0,1,2)\n(To EXIT enter 3 )\n");
        scanf("%d",&num);
        if(num  == 0)
	    s.top = &(s.top1);
        else if (num == 1)
            s.top = &(s.top2);
        else if (num == 2)
            s.top = &(s.top3);
	else if (num == 3)
	    return;
        else
        {
            printf("\nINVALID STACK INDEX\nTRY AGAIN!\n");
            continue;
        }
        printf ("\n");
        printf (" 1-->PUSH \n");
        printf (" 2-->POP \n");
        printf (" 3-->DISPLAY \n");
        printf (" 4-->EXIT \n");
        printf ("\n");
 
        printf ("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            return;
	default:
	    printf("\nEnter a valid choice\n");
        }
    }
}
/*  Function to add an element to the stack */
void push (STACK *s)
{
    int num;
    if ((*(s->top)) < (STACKSIZE * 3))
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        (*(s->top)) = INCREASETOP((*(s->top)));
        s->stk[*(s->top)] = num;
    }
    else
    {
        printf ("Stack is Full\n");
        return;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop (STACK *s)
{
    int num;
    if ((*(s->top)) < 0)
    {
        printf ("Stack is Empty\n");
        return (*(s->top));
    }
    else
    {
        num = s->stk[(*(s->top))];
        printf ("poped element is = %d\n", s->stk[*(s->top)]);
        DECREASETOP((*(s->top)));
    }
    return(num);
}
/*  Function to display the status of the stack */
void display (STACK *s)
{
    int i;
    if ((*(s->top)) < 0)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = (*(s->top)); i >= 0; i=i-3)
        {
            printf ("%d\n", s->stk[i]);
        }
    }
    printf ("\n");
}
