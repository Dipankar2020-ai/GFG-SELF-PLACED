#include <iostream>

using namespace std;
int maxpieces(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return -1;
    }
    int res=max(maxpieces(n-a,a,b,c),max(maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)));
    if(res==-1)
    {
        return -1;
    }
    return 1+res;
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=maxpieces(n,a,b,c);
    cout<<ans;

    return 0;
}
