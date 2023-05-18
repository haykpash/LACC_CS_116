// Instructions

// Write a program that prompts the user to input a string. 
// The program then uses the function substr to remove all 
// the vowels from the string. For example, if str = "There",
//  then after removing all the vowels, str = "Thr". After
//   removing all the vowels, output the string. Your program 
//   must contain a function to remove all the vowels and a 
//   function to determine whether a character is a vowel.

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    
    string str, l, strOut;

    cout << "Enter a string: ";
    cin >> str;

    regex reg("[aeiouywAEIOUYW]");
    
    int len = str.length();
    
    for(int i = 0; i < len; i++) 
    {
      l = str[i];
      if(!regex_match(l, reg)) 
      {
        strOut = strOut + l;
      }
     
    }
    cout << strOut;
    
  return 0;
}
