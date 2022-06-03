/*
Task
In this simple Kata your task is to create a function that turns a string into a Mexican Wave. You will be passed a string and you must return that string in an array where an uppercase letter is a person standing up. 
Rules
 1.  The input string will always be lower case but maybe empty.

 2.  If the character in the string is whitespace then pass over it as if it was an empty seat
Example
wave("hello") => []string{"Hello", "hEllo", "heLlo", "helLo", "hellO"}
*/

std::vector<std::string> wave(std::string y){
  //Code Here...
  std::vector<std::string> v;
  if(y.empty())
    return v;
  
  for(size_t i = 0; i < y.size(); ++i)
  {
    std::string s = y;
    if(!isspace(s[i]))
    {
      s[i] = toupper(s[i]);
      v.push_back(s);
    }
  }
  return v;
}