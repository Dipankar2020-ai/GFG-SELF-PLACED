#include <iostream>

using namespace std;
int factorial(int m)
{
    if(m==0)
        return 1;
     return m*factorial(m-1);
}
int main()
{
    int n,fact=1;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
}
