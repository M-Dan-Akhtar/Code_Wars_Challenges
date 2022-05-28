/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/

function solution(str, ending){
    // TODO: complete
    let sl = str.length;
    let l = ending.length;
    let j = 0;
  
    for(let i = sl - l; i < sl; ++i)
    {
      if(str[i] != ending[j])
        return false;
      j++;
    }
    
    return true;
  }