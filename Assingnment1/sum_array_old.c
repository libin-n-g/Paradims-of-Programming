/* 
Program to compute sum of all elments in a given array
Author : Libin N George
Date   : 10 August 2017
Time Complexity O(n)
Space O(n)
*/
#include <stdio.h>
#include <stdlib.h>
//function which computes sum of all elements of a given array 
int compute_sum(int array[],int num)
{
	int i = 0;
    for (i = 1;i < num; i++)
    {
      array[0] = array[0] + array[i];
    }
    return array[0];
}

void main()
{
    int i, num_elements;
    int *array = NULL;
    printf("Enter number of elements in the array to Sum: ");
    scanf("%d", &num_elements);
    if (num_elements > 0)
    {
        array = (int *)malloc(num_elements * sizeof(int));
        if(array)
		{
	    	printf("Enter Elemets (integer) you need to add to array\n");
        	for (i = 0 ; i < num_elements; i++)
        	{
	    	    scanf("%d",&array[i]);
	    	}
        	printf("Sum of all elements of the array is %d \n", compute_sum(array, num_elements));
		}
    	else
		{
		    printf("Out of Memory\n");
		}
    }
    else
    {
      printf("Number of Elements in the array should be positive\n");
    }
}
