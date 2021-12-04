Given a number N. Find its unique prime factors in increasing order.
 

Example 1:

Input: N = 100
Output: 2 5
Explanation: 2 and 5 are the unique prime
factors of 100.

Solution:
class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	    vector<int> v;
	    
	    if(n==1)
	    {
	        return v;
	        //return v;
	    }
	    for(int i=2;i*i<=n;i++)
	    {
	        while(n%i==0)
	        {
	            if(count(v.begin(),v.end(),i)==false)
	                   v.push_back(i);
	            n=n/i;
	        }
	    }
	    if(n>1)
	       v.push_back(n);
	   return v;    
	}
