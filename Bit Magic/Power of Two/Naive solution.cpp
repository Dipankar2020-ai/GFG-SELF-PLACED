#include <iostream>

using namespace std;
bool poweroftwo(int n)
{
    if(n==0)
    {
        return false;
    }
    else
    {
        while(n!=1)
        {
            if(n%2!=0)
            {
                return false;
            }
            n=n/2;
        }
        return true;
    }
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
