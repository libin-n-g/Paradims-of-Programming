/* 
   Program which remove adjacent duplicates given a list of items.
   Author : Libin N George
   Date   : 10 August 2017
   Time Complexity O(n)
   Space O(n)
*/

#include <stdio.h>
#include <stdlib.h>

/*
  Function which removes adjacent duplicates from list and 
  return number of elements in the modified list
*/
int remove_adjacent_duplicates(int item_list[],int num_items)
{
  	int index = 1, j = 1; // j used for writing non duplicates to array
  	int prev = item_list[0];
  	while (index < num_items)
  	{
  		if(prev == item_list[index])
		{
			index++;
		  	continue;
		}
    	item_list[j] = item_list[index];
    	prev = item_list[j];
    	index++;
    	j++;
  	}
  	return j; // returns number of elements in modified array 
}

void main()
{
  	int *item_list = NULL;
  	int index, num_items;
  	printf("Enter Number of items in the list: ");
  	scanf("%d", &num_items);
  	if(num_items > 0)
    {
    	item_list = (int*) malloc(num_items * sizeof(int));
      	if(item_list)
		{
	  		for (index = 0; index < num_items ; i++) //loop to input list
	    	{
	      		scanf("%d", &item_list[i]);
	    	}
	  		num_items = remove_adjacent_duplicates(item_list, num_items);
			printf("List after removing Adjacent duplicates\n");
	  		for (index = 0; index < num_items ; i++)//loop to print output list
	    	{
	      		printf("%d\t", item_list[i]);
	    	}
	  		printf("\n");
		}
    }
  	else
    {
      	printf("Number of items in list should be positive\n");
  	}
}
