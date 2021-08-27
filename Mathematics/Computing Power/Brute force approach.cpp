#include <iostream>

using namespace std;

int main()
{
    int x,n,sum=1;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
       sum=sum*x;
    }
    cout<<sum;

    return 0;
}
