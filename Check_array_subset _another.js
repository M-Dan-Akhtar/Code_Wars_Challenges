// Check if an array is subset of another array
// Last Updated : 31 Dec, 2024
// Given two arrays a[] and b[] of size m and n respectively, the task is to determine whether b[] is a subset of a[]. Both arrays are not sorted, and elements are distinct.

// Examples: 

// Input: a[] = [11, 1, 13, 21, 3, 7], b[] = [11, 3, 7, 1] 
// Output: true


// Input: a[]= [1, 2, 3, 4, 5, 6], b = [1, 2, 4] 
// Output: true


// Input: a[] = [10, 5, 2, 23, 19], b = [19, 5, 3] 
// Output: false

function isSubSet(arrA, arrB){
  
  arrA.sort((a, b) => a - b);
  arrB.sort((a, b) => a - b);

  let i = 0, j = 0;

  while(i < arrA.length && j < arrB.length)
  {
    if(arrA[i] < arrB[j])
    {
      i++;
    }
    else if(arrA[i] == arrB[j])
    {
      i++;
      j++;
    }
    else
    {
      return false;
    }
  }

  return true;
}

console.log(isSubSet([11, 1, 13, 21, 3, 7], [11, 3, 7, 1] ), "true");
console.log(isSubSet([1, 2, 3, 4, 5, 6], [1, 2, 4]) , "true");
console.log(isSubSet([10, 5, 2, 23, 19], [19, 5, 3] ), "false");


//using a set
function isSubSetHashSet(arrA, arrB){
  let s = new Set(arrA);

  arrB.forEach( x => {
    if(!s.has(x)) return false
  })

  return true;
}

console.log(isSubSetHashSet([11, 1, 13, 21, 3, 7], [11, 3, 7, 1] ), "true");
console.log(isSubSetHashSet([1, 2, 3, 4, 5, 6], [1, 2, 4]) , "true");
console.log(isSubSetHashSet([10, 5, 2, 23, 19], [19, 5, 3] ), "false");