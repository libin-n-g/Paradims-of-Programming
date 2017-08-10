/* 
    Program to compute sum of all elments in a given array
    Author : Libin N George
    Date   : 10 August 2017
    Time Complexity O(n)
    Space O(1)
*/
#include <stdio.h>
#include <stdlib.h>
//function which computes sum of given number of elements  
int compute_sum(int num)
{
	int sum = 0, element, i;
    for (i = 0;i < num; i++)
    {
      scanf("%d", &element);
      sum = sum + element;
    }
    return sum;
}

void main()
{
    int num_elements;
    printf("Enter number of elements in the array to Sum: ");
    scanf("%d", &num_elements);
    if (num_elements > 0)
    {
    	printf("Enter Elements (integer) you need to add\n");
    	printf("Sum of all elements of the given array is %d \n", compute_sum(num_elements));
    }
    else
    {
      printf("Number of Elements in the array should be positive\n");
    }
}
