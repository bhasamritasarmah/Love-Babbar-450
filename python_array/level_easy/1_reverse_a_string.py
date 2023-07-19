# Question: You are given a string s. You need to reverse the string.

def reverseWord(s):
    #your code here
    word = ""
    for i in s:
        word = i + word      
        
    return word


# Source: https://practice.geeksforgeeks.org/problems/reverse-a-string/1
# The program has been done on the above platform.
# The program passed all the test cases of the above platform.
