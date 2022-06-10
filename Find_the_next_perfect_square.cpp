/*
You might know some pretty large perfect squares. But what about the NEXT one?

Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter. Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.

If the parameter is itself not a perfect square then -1 should be returned. You may assume the parameter is non-negative.

Examples:(Input --> Output)

121 --> 144
625 --> 676
114 --> -1 since 114 is not a perfect square
*/

#include <math.h>

long int findNextSquare(long int sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
  long int sqr = sqrt(sq);
  
  std::cout << sqr;
  
  if(sqr*sqr != sq)
    return -1;
  
  for(size_t i = sq + 1; ;++i)
  {
    long int s = sqrt(i);
    if(s * s == i)
      return i;
  }

  return -1;
}