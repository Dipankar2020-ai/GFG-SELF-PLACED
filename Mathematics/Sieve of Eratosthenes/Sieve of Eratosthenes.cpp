Given a number N, calculate the prime numbers up to N using Sieve of Eratosthenes.  

Example 1:

Input:
N = 10

Output:
2 3 5 7

Explanation:
Prime numbers less than equal to N 
are 2 3 5 and 7.

Solution:
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        vector<bool>isprime(n+1,true);
        vector<int>v;
       for(int i=2;i<=n;i++)
       {
         if(isprime[i])
          {
             v.push_back(i);
            for(int j=i*i;j<=n;j=j+i)     //Time complexity is o(nlog(logn))
            {
                 isprime[j]=false;                
            }
        }
     }
     
        return v;
        
    }
};
