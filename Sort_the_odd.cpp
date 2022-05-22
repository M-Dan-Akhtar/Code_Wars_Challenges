/*
You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

Examples
[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
*/

class Kata
{
public:
    
    std::vector<int> sortArray(std::vector<int> array)
    {
        using namespace std;
        vector<int> v;
      
        for(size_t i = 0; i < array.size(); ++i)
        {
          if(array[i] % 2 != 0)
          {
            v.push_back(array[i]);
          }
        }
      
        sort(v.begin(), v.end());
      
        auto it = v.begin();
        for(size_t i = 0; i < array.size(); ++i)
        {
          if(array[i] % 2 != 0)
          {
            array[i] = *it;
            it++;
          }
        }
        
        return array;
    }
};