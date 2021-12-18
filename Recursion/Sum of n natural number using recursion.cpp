#include <iostream>

using namespace std;
int sumoffirst(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sumoffirst(n-1);
}

int main()
{
    int n;
    cin>>n;
    int ans=sumoffirst(n);
    cout<<ans;

    return 0;
}
