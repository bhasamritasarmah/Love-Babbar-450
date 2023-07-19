# Question: You are given an array arr. You need to reverse the contents of the array.

def reverse_array(arr):
    for i in range(len(arr) // 2):            # Traverses the first half of the array, if the array length is even.
                                              # Traverses all the elements upto and excluding the mid element, if the array length is odd.k
                                              # // denotes integer division, meaning the output will be an integer. E.g. 7 // 2 = 3.
      
        j = (len(arr) - 1) - i                # j denotes the position to be swapped with. 
        (arr[i], arr[j]) = (arr[j], arr[i])   # swapping
    return arr


# This program was done on my own laptop using vim editor. Only the relevant parts of the whole program are given here.
# The program was tested for its correctness on the following test cases - 
# Test Case 1: arr = [1, 2, 3, 4, 5]
# Test Case 2: arr = [1, 2, 3, 4, 5, 6]
# Test Case 3: arr = [1, 2]
# Test Case 4: arr = [1]
# Test Case 5: arr = []
# The program passed all the above test cases.
