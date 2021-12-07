Given an unsorted array, arr[] of size N and that contains even number of occurrences for all numbers except two numbers. Find the two numbers in decreasing order which has odd occurrences.

Example 1:

Input:
N = 8
Arr = {4, 2, 4, 5, 2, 3, 3, 1}
Output: {5, 1} 
Explaination: 5 and 1 have odd occurrences.

Example 2:

Input:
N = 6
Arr = {1 7 5 5 4 4}
Output: {7, 1}
Explaination: 7 and 1 have odd occurrences.
 
Solution:
class Solution{
    public:
    vector<int> twoOddNum(int arr[], int n)  
    {
        int res1=0,res2=0,xor1=0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            xor1=xor1^arr[i];
        }
        int sn=(xor1)&(~(xor1-1));
        for(int i=0;i<n;i++)
        {
            if((arr[i]&sn)!=0)
            {
                res1=res1^arr[i];
            }
            else
            {
                res2=res2^arr[i];
            }
        }
        if(res2>res1)
        {
            v.push_back(res2);
            v.push_back(res1);
        }
        else
        {
          v.push_back(res1);
          v.push_back(res2);
        }
        
        
        return v;
    }
};
