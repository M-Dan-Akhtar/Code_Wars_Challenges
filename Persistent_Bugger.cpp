/*
Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)
*/

#include <math.h>
#include <vector>

int persistence(long long n){
 // your code here
  std::vector<int> v;
  int counter = 0;
  while(true)
  {
    int num_digits = floor( log10(abs(n?n:1)) + 1 );
    if(num_digits == 1)
      break;
    
    for(int i = 0; i < num_digits; ++i)
    {
      v.push_back(n%10);
      n/=10;
    }
    
    n = v[0];
    for(int i = 1; i < num_digits; ++i)
    {
      n *= v[i];
    }
    v.clear();
    counter++;
  
  }
  return counter;
}