
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
     cin>>n;
    if(n==1)
    {
        cout<<"It is not not prime not consonant";
    }
    if(n==2||n==3)
    {
        cout<<"It is a prime number";
        return 0;
    }
    if(n>2)
    {
    if(n%2==0 ||n%3==0)
    {
        cout<<"It is not prime";
        return 0;
    }
    
     for(int i=5;i*i<=n;i=i+6)
     {
         if(n%i==0 ||n%(i+2)==0)
         {
             cout<<"It is not prime";
             return 0;
         }
         
             cout<<"It is prime";
             return 0;
         
     }
      cout<<"It is prime";
    }

    return 0;
}
