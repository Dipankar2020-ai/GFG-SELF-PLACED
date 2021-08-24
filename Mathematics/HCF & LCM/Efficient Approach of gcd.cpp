#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int Lcm(int a,int b)
{
    int gcd1=gcd(a,b);
    cout<<"HCF is "<<gcd1<<endl;
    return (a*b)/gcd(a,b);
}
int main()
{
 
 int a,b;
 cin>>a>>b;
 cout<<"LCM is "<<Lcm(a,b)<<endl;;

    return 0;
}
