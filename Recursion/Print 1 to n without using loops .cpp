You are given an integer N. Print numbers from 1 to N without the help of loops.

Example 1:

Input:
N = 5
Output:
1 2 3 4 5
Explanation:
We have to print numbers from 1 to 5.
 
Solution:
class Solution
{
public:
    void printTillN(int N)
    {
        if(N==0)
        {
            return;
        }
        printTillN(N-1);
        cout<<N<<" ";
    }
};
