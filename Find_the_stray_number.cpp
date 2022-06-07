/*
You are given an odd-length array of integers, in which all of them are the same, except for one single number.

Complete the method which accepts such an array, and returns that single different number.

The input array will always be valid! (odd-length >= 3)

Examples
[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3
*/

#include <map>

int stray(std::vector<int> numbers) {
    std::map<int, unsigned> m;
    
    for(auto i : numbers)
      m[i]++;
  
    for(auto it = m.begin(); it != m.end(); ++it)
      if(it->second == 1)
        return it->first;    
  
    return 0;
};