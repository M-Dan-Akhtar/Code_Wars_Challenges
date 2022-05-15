/*
Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

Examples
"This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps"
*/

std::string reverse_words(std::string str)
{
    std::string word = "";
    std::string reverseWord;
  
    for(size_t i = 0; i < str.size(); ++i)
    {
    
        if( isspace(str.at(i)) )
        {
            for(size_t j = 0; j < word.size(); ++j)
            {
                reverseWord += word.at(word.size() - 1 - j);
            } 
            reverseWord += " ";
            word = "";
        }
        else
            word += str.at(i);
    }
    
        for(size_t j = 0;j < word.size(); ++j)
        {
            reverseWord += word.at(word.size() - 1 - j);
        } 
    
    return reverseWord;
}