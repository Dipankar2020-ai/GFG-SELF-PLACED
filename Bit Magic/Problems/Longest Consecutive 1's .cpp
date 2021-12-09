Given a number N. Find the length of the longest consecutive 1s in its binary representation.

Example 1:

Input: N = 14
Output: 3
Explanation: 
Binary representation of 14 is 
1110, in which 111 is the longest 
consecutive set bits of length is 3.
Example 2:

Input: N = 222
Output: 4
Explanation: 
Binary representation of 222 is 
11011110, in which 1111 is the 
longest consecutive set bits of length 4. 

Solution:
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count=0;
        while(N>0)
        {
            N=N &(N<<1);
            count++;
        }
        return count;
    }
};
