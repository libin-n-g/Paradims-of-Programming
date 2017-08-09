'''
Program to Print Fibonacci series.
Author : Libin N George
Date   : 9 August 2017
'''

def fibonacci(num_term):
    '''
    This function returns the list of 'num_terms' number of terms in Fibonacci Series
    '''
    if num_term > 0:
        fibon = []
        for i in range(num_term):
            if i <= 1:
                fibon.append(i)
            else:
                fibon.append(fibon[-1]+fibon[-2])
    return fibon

def main():
    '''
    Main function which gets Number of terms to be printed from the user
    '''
    num_term = int(raw_input("Enter number terms of fibonacci series: "))
    if num_term > 0:
        print "Fibonacci series terms are "
        for term in fibonacci(num_term):
            print term
    else:
        print "Number of terms should be a positive number"

if __name__ == "__main__":
    main()
