  // Input: s = “geeksforgeeks”
  // Output: ‘f’
  // Explanation: ‘f’ is the first character in the string which does not repeat.


  // Input: s = “racecar”
  // Output: ‘e’
  // Explanation: ‘e’ is the only character in the string which does not repeat.


  // Input: “aabbccc”
  // Output: ‘$’
  // Explanation: All the characters in the given string are repeating.

  function nonRepeat(str){
    let s = str.split("");
    let mMap = new Map();
    
    for(let i = 0; i < s.length; ++i)
    {
      let w = s[i];

      if(mMap.has(w)){
        mMap.set(w, mMap.get(w) + 1);
      }
      else
      {
        mMap.set(w, 1);
      }
    }

    let result = s.find(x => mMap.get(x) == 1) || "$"

    return result;
  }

  console.log(nonRepeat("geeksforgeeks"), "f");
  console.log(nonRepeat("racecar"), "e");
  console.log(nonRepeat("aabbccc"), "$");
