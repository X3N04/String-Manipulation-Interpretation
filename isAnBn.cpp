/*
 * isAnBn.cpp
 * Daniel Salazar
 * 7/14/16
 * Prints 1 if string is in the form (A^(n))(B^(n))
 * Prints 0 if string is not
 */
#include<iostream>
#include<string>
bool isAnBn(std::string s)
{
   if(s.empty())
      return true;
   else if(s[0] == 'A' && s[s.length() - 1] == 'B')
      return isAnBn(s.substr(1, s.length() - 2));
   else
      return false;
}
int main()
{
   std::string s = "AAABBB";
   std::cout << isAnBn(s) << std::endl;
   s = "AABBB";
   std::cout << isAnBn(s) << std::endl;
   return 0;
}

