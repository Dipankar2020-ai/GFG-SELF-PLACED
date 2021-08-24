#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int dis=1;
    if(a>b)
    {
        dis=a;
    }
    else
    {
        dis=b;
    }
    int ans=1;
    for(int i=1;i<=dis;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    cout<<"HCF is "<<ans<<endl;
    int lcm=(a*b)/ans;
    cout<<"LCM is "<<lcm;
    return 0;
}
