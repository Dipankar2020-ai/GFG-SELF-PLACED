#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countdigit(int n)
{
    if(n==0)
    {
        return 1;
    }
    return floor(log10(n)+1);
}
int main()
{
    int n;
    cin>>n;
   int ans=countdigit(n);
   cout<<ans<<endl;

    return 0;
}
