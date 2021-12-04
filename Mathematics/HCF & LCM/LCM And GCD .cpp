Given two numbers A and B. The task is to find out their LCM and GCD.

 

Example 1:

Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while
thier GCD is 5.

Solution:
class Solution {
  
  public:
  long long gcd(long long A,long long B)
  {
      if(B==0)
      {
          return A;
      }
      return gcd(B,A%B);
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code 
        long long ans=gcd(A,B);
        long long ans2=(A*B)/ans;
        vector<long long>v;
        v.push_back(ans2);
        v.push_back(ans);
        return v;
    }
};
