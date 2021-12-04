For an integer N find the number of trailing zeroes in N!.

Example 1:

Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.

Solution:
class Solution
{
public:
    int trailingZeroes(int N)
    {
        int res=0;
        for(int i=5;i<=N;i=i*5)
        {
            res=res+N/i;
        }
        return res;
    }
};
