
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,flag=1;
    cin>>n;
    if(n==1)
    {
        cout<<"the number is not prime not consonant";
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            
        }
    }
    if(flag)
    cout<<"The number is prime";
    else
     cout<<"The number is not prime";
    return 0;
}
