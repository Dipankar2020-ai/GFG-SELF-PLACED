Given an integer N. You have to find the number of digits that appear in its factorial, where factorial is defined as, factorial(N) = 1*2*3*4……..*N and factorial(0) = 1.
 

Example 1:

Input:
N = 5
Output:
3
Explanation:
5! is 120 so there are 3
digits in 120

Solution:
class Solution{
public:
    int facDigits(int N){
        
        if(N==0||N==1)
           return N;
         double digits=0;
         for(int i=2;i<=N;i++)
         {
             digits+=log10(i);
         }
         return floor(digits)+1;
    }
};
