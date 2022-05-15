/*
In this kata you have to write a simple Morse code decoder. While the Morse code is now mostly superseded by voice and digital data communication channels, it still has its use in some applications around the world.
The Morse code encodes every character as a sequence of "dots" and "dashes". For example, the letter A is coded as ·−, letter Q is coded as −−·−, and digit 1 is coded as ·−−−−. The Morse code is case-insensitive, traditionally capital letters are used. When the message is written in Morse code, a single space is used to separate the character codes and 3 spaces are used to separate words. For example, the message HEY JUDE in Morse code is ···· · −·−−   ·−−− ··− −·· ·.

NOTE: Extra spaces before or after the code have no meaning and should be ignored.

In addition to letters, digits and some punctuation, there are some special service codes, the most notorious of those is the international distress signal SOS (that was first issued by Titanic), that is coded as ···−−−···. These special codes are treated as single special characters, and usually are transmitted as separate words.

Your task is to implement a function that would take the morse code as input and return a decoded human-readable string.

For example:

decodeMorse('.... . -.--   .--- ..- -.. .')
//should return "HEY JUDE"
*/

std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string decoded;
    std::string word;
    
    // remove leading and trailing white spaces
    size_t p = morseCode.find_first_not_of(" \t");
    morseCode.erase(0,p);
    
    p = morseCode.find_last_not_of(" \t");
    if(std::string::npos != p)
        morseCode.erase(p+1);
  
    //loop through each char, convert to word at each space, if two spaces together, add a space in decoded message
    for(size_t i = 0; i < morseCode.size(); ++i)
        {
            if(morseCode.at(i) == ' ')
            {
                decoded += MORSE_CODE[word];
                
                if( (i + 1 < morseCode.size()) && (morseCode.at(i + 1) == ' '))
                {
                    if(word != "")
                        decoded += " ";

                    i++;  // increase counter so it doesn't read the space twice
                }
                
                word = "";
            }
            else
                word += morseCode.at(i);
        }
    decoded += MORSE_CODE[word];

    return decoded;
}