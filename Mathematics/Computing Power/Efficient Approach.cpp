#include <iostream>

using namespace std;
int powerof(int x,int n)
{
    
    if(n==0)
    {
        return 1;
    }
    int temp=powerof(x,n/2);  
    temp=temp*temp;
    if(n%2==0)
    {
        return temp;
    }
    else
    {
        return temp*x;
    }
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<powerof(x,n);

    return 0;
}
