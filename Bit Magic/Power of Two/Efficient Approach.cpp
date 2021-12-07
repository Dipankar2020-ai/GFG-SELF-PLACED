#include <iostream>

using namespace std;
bool poweroftwo(int n)
{
    if(n==0)
    {
        return false;
    }
   return ((n&(n-1))==0);
}

int main()
{
    int n;
    cin>>n;
    if(poweroftwo(n))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
