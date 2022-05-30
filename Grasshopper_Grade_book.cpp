/*
Complete the function so that it finds the average of the three scores passed to it and returns the letter value associated with that grade.

Numerical Score	Letter Grade
90 <= score <= 100	'A'
80 <= score < 90	'B'
70 <= score < 80	'C'
60 <= score < 70	'D'
0 <= score < 60	'F'
*/

char getGrade(int a, int b, int c) {
  // your code here
  float avg = (a + b + c) / 3.0;
  
  if(avg >= 90 && avg <= 100)
    return 'A';
  else if(avg >= 80 && avg < 90)
    return 'B';
  else if(avg >= 70 && avg < 80)
    return 'C';
  else if(avg >= 60 && avg < 70)
    return 'D';
  else 
    return 'F';