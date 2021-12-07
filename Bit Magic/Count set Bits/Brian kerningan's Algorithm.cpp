#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    while(n>0)
    {
        n=n&(n-1);     //Time complexity 0(set bit count)
        res++;
    }
    cout<<"Total number of set bits=>"<<res<<endl;

    return 0;
}
