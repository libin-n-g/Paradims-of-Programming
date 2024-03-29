"""
Program which remove adjacent duplicates given a list of items.
Author : Libin N George
Date   : 9 August 2017
Time Complexity O(n)
Space O(n)
"""
def remove_adjacent_duplicates(item_list):
    '''
    Function which removes the adjacent duplicates from item_list
    '''
    index = 1
    while index < len(item_list):
        if item_list[index] == item_list[index-1]:
            item_list.pop(index)
            continue
        index += 1
    return item_list

def main():
    """
    Main function which gets list from the user
    """
    num_items = int(raw_input("Enter the Number of item in the List:"))
    item_list = []
    if num_items > 0:
        print "Enter items in the List:"
    else:
        print "Number of items should be greater then ZERO"
        return
    while num_items > 0:
        item = int(raw_input())
        item_list.append(item)
        num_items -= 1
    print "list after removing Adjacent duplicates"
    print remove_adjacent_duplicates(item_list)


if __name__ == '__main__':
    main()
