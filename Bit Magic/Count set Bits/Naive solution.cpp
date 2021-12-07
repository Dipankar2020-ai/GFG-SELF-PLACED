#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    while(n>0)
    {
        if((n&1)==1)
        {
            res++;
        }
        n=(n>>1);
    }
    cout<<"Total number of set bits=>"<<res<<endl;

    return 0;
}
