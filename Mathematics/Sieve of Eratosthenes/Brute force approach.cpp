#include <iostream>

using namespace std;
int isprime(int m)
{
    for(int i=2;i<m;i++)
    {
        if(m%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
