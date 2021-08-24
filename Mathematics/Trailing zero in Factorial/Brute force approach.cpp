
#include <iostream>

using namespace std;

int main()
{
    long long  int n,count=0;
    cin>>n;
    long long int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    
    cout<<ans<<endl;
    while(ans!=0)
    {
       long long int rem=ans%10;
        if(rem==0)
        {
            count++;
        }
        else
        {
            break;
            
        }
        ans=ans/10;
    }
    cout<<count;
    return 0;
}
