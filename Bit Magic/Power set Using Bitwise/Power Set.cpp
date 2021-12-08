Given a string S find all possible subsequences of the string in lexicographically-sorted order.

Example 1:

Input : str = "abc"
Output: a ab abc ac b bc c
Explanation : There are 7 substrings that 
can be formed from abc.
Example 2:

Input: str = "aa"
Output: a a aa
Explanation : There are 3 substrings that 
can be formed from aa.

Solution:
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string>m;
		    int n=s.length();
		    long long int  powsize=pow(2,n);
		    for(int i=1;i<powsize;i++)
		    {
		        string res;
		        for(int j=0;j<n;j++)
		        {
		            if((i&(1<<j))!=0)
		            {
		                res=res+s[j];
		            }
		        }
		        m.push_back(res);
		       
		    }
		    sort(m.begin(),m.end());
		    return m;
		}
};
