
#include <iostream>

using namespace std;
int power(long long int x,long long int n)
{
    long long int res=1;
    while(x>0)
    {
        if(n%2!=0)  //write it as if(n&1)
        {
            res=res*x;
        }
        x=x*x;
        n=n/2;  //n=n>>1;
    }
    return res;
}

int main()
{
    long long int x,n;
    cin>>x>>n;
    cout<<power(x,n);

    return 0;
}
