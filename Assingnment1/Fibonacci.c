/* 
   Program to Print Fibonacci series.
   Time Complexity O(n)
   Space O(1)
   Author : Libin N George
   Date   : 10 August 2017
*/ 

#include <stdio.h>
#include <limits.h>

// Function to print Fibonacci series upto given number of terms 
void Fibonacci(int num_terms)
{
  	long prev_term = 1, pprev_term = 0, cur_term, i;
  	if (num_terms >= 1)
  	{
    	printf("0\n");
  	}
 	if (num_terms >= 2)
  	{
    	printf("1\n");
  	}
  	if (num_terms > 2)
  	{
    	for(i = 2;i < num_terms;i++)
   	 	{
      		cur_term = prev_term + pprev_term;
      		pprev_term = prev_term;
      		prev_term = cur_term;
      		if ( cur_term < 0)
      		{
				printf("INTEGER OVERFLOW OCCURRED\n");
				break;
      		}
      		printf("%ld\n",cur_term);
    	}
  	}
}

void main()
{
  	int num_term;
  	printf("Enter number terms of fibonacci series:");
  	scanf("%d", &num_term);
  	if(num_term > 0)
  	{
  	  	Fibonacci(num_term);
  	}
  	else
  	{
  	  	printf("Number of terms must be positive\n");
  	}
}
