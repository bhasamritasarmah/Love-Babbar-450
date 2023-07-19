//Question: You are given an array arr. You need to reverse the contents of the array.

void swap(vector<int>& arr, int i, int j)
{
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}

vector<int> reverseInt(vector<int> arr)
{
        //write your code here
        int len = arr.size();
        int j;

        for (int i = 0; i < len / 2; i++)      //traverses the first half, if the number of elements are even.
                                               //traverses all elements before the mid element, if the number of elements are odd.
        {
                j = (len - 1) - i;             //j denotes the position to swap with
                swap(arr, i, j);
        }

        return arr;
}


// This program was done in vim editor in my own laptop. Only the relevant functions of the program has been given here. 
// The test cases with which the program was checked are - 
// Test Case 1: arr = {1, 2, 3, 4, 5}
// Test Case 2: arr = {1, 2, 3, 4, 5, 6}
// Test Case 3: arr = {}
// Test Case 4: arr = {1}
// Test Case 5: arr = {1, 2}
// All the above test cases have been passed.
