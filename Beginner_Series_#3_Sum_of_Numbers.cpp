/*
Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!

Examples (a, b) --> output (explanation)
(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
(-1, 0) --> -1 (-1 + 0 = -1)
(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)
*/

int get_sum(int a, int b)
{
    int startPos = a;
    int endPos = b;
    int sum = 0;
    if(a == b)
        return a;
    
    if(a > b)
    {
        startPos = b;
        endPos = a;
    } 
    
    for(int i = startPos; i <= endPos; ++i){
        sum += i;
    }
    
    return sum;
}