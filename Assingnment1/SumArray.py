'''
Program to compute sum of all elments in a given array
Author : Libin N George
Date   : 10 August 2017
Time Complexity O(n)
Space O(n)
'''
def compute_sum(array):
    '''
    Function which computes sum of the array elements
    '''
    if len(array) > 1:
        for index in range(len(array)-1):
            array[0] = array[0] + array[index+1]
    return array[0]

def main():
    """
    Main function which takes the input array for finding sum
    """
    num_elements = input("Enter the Number of elements in the array to Sum: ")
    if num_elements > 0:
        array = []
        print "Enter elments(integer) in the array:"
        index = 0
        while index < num_elements:
            array.append(input())
            index += 1
        print "Sum of all elements in the array is", compute_sum(array)
    else:
        print "Number of elements in the array should be greater then ZERO"

if __name__ == "__main__":
    main()
