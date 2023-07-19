// Question: You are given a string s. You need to reverse the string.

string reverseWord(string str){
    
  //Your code here
  int len = str.size();
  int temp, j;
  
  for (int i = 0; i < len / 2; i++)
  {
      j = (len - 1) - i;            // j is the position to be swapped with
      
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
  }
  
  return str;
}


// Source: https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// The above program was done on the GeeksforGeeks platform, whose link is given here.
// The program passed all the test cases on the platform.
