#include <iostream>

using namespace std;
void subsets(string s,string curr=" ",int i=0)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main()
{
    int n;
    string s,curr="";
    int i=0;
    cin>>s;
    
    subsets(s,curr,i);

    return 0;
}
