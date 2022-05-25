/*
Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

Examples
[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).
*/

#include <vector>

int findOdd(const std::vector<int>& numbers){
  //your code here
  int curr;
  int count = 0;
  
  for(size_t i = 0; i < numbers.size(); ++i)
  {
    curr = numbers[i];
    for(size_t j = 0; j < numbers.size(); ++j)
    {
      if(curr == numbers[j])
        count++;
    }
    if(count % 2 != 0)
      return curr;
    else
      curr = 0;
  }
  
  return -1;
}