'''
Program to Print Fibonacci series.
Time Complexity O(n)
Space O(1)
Author : Libin N George
Date   : 9 August 2017
'''

def fibonacci(num_term):
    '''
    This function prints Fibonacci Series upto 'num_term' terms
    '''
    if num_term > 0:
        pprev_term = 0
        prev_term = 1
        if num_term >= 1:
            print "0"
        if num_term >= 2:
            print "1"
        if num_term > 2:
            for i in range(2, num_term):
                cur_term = pprev_term + prev_term
                pprev_term = prev_term
                prev_term = cur_term
                print cur_term


def main():
    '''
    Main function which gets Number of terms to be printed from the user
    '''
    num_term = int(raw_input("Enter number terms of fibonacci series: "))
    if num_term > 0:
        print "Fibonacci series terms are "
        fibonacci(num_term)
    else:
        print "Number of terms should be a positive number"

if __name__ == "__main__":
    main()
