#include <iostream>

using namespace std;
bool checkpalindrome(string s,int start,int end)
{
    if(start>=end)
    {
        return true;
    }

    return (s[start]==s[end])&&checkpalindrome(s,start+1,end-1);
    
}
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    if(checkpalindrome(s,0,len-1))
    {
        cout<<"Yes it is palindrome";
    }
    else
    {
        cout<<"It is not a palindrome";
    }

    return 0;
}
