'''
Program to compute sum of all elments in a given array
Author : Libin N George
Date   : 10 August 2017
Time Complexity O(n)
Space O(1)
'''
def compute_sum(num_elements):
    '''
    Function which computes sum of given number of elements
    '''
    Sum = 0
    index = 0
    while index < num_elements:
        Sum = Sum + input()
        index += 1
    return Sum

def main():
    """
    Main function which takes the input array for finding sum
    """
    num_elements = input("Enter the Number of elements in the array to Sum: ")
    if num_elements > 0:
        print "Enter elments(integer) in the array:"
        print "Sum of all elements in the array is",compute_sum(num_elements)
    else:
        print "Number of elements in the array should be greater then ZERO"

if __name__ == "__main__":
    main()
