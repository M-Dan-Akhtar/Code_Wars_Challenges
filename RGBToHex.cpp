/*
The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a hexadecimal representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

The following are examples of expected output values:

rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
*/

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b);
};

std::string RGBToHex::rgb(int r, int g, int b)
{
  using namespace std;
   
  string hex;
  vector<int> v = { r, g, b};
  map<size_t, char> m = { {10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}};
   
  for(size_t i = 0; i < v.size(); ++i)
  {
    if( v[i] < 0 ) v[i] = 0;
    if( v[i] > 255) v[i] = 255;
  }
    
  for(auto i : v)
  {
    size_t j = i / 16;  
    (j < 10 ) ? hex += to_string(j) : hex += m[j] ;
    
    j = ( i % 16 );
    (j < 10 ) ? hex += to_string(j) : hex += m[j];
  }
  
  return hex;
}