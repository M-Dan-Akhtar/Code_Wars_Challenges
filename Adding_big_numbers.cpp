/*
We need to sum big numbers and we require your help.

Write a function that returns the sum of two numbers. The input numbers are strings and the function must return a string.

Example
add("123", "321"); -> "444"
add("11", "99");   -> "110"
Notes
The input numbers are big.
The input is a string of only digits
The numbers are positives
*/

#include <string>
using namespace std;

std::string add(const std::string& a, const std::string& b) {
  using namespace std;
  string s1 = a;
  string s2 = b;
  string result = "";
  
  // make sure s2 is always bigger
  if(s1.size() > s2.size())
    swap(s1, s2);
  
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  
  size_t l1 = s1.size();
  size_t l2 = s2.size();
  
  int carry = 0;
  for(size_t i = 0; i < l1; ++i)
  {
    int sum = (s1[i]-'0') + (s2[i]-'0') + carry;
    result.push_back(sum%10 + '0');
    carry = sum/10 ;
  }
  
  for(size_t i = l1; i < l2; ++i)
  {
    int sum = (s2[i] - '0') + carry;
    result.push_back(sum%10 + '0');
    carry = sum/10;
  }
  
  if(carry)
    result.push_back(carry + '0');
  
  reverse(result.begin(), result.end());
  return result;
}