#include <iostream>
using namespace std;
int lookup[256];
void intialize()
{
    lookup[0]=0;
    for(int i=1;i<256;i++)
    {
        lookup[i]=(i&1)+lookup[i/2];
    }
}
int count(int n)
{
    int res=lookup[n & 0xff];
    n=n>>8;
    res=res+lookup[n & 0xff];  //Time complexity 0(1) 
    n=n>>8;
    res=res+lookup[n & 0xff];
    n=n>>8;
    res=res+lookup[n & 0xff];
    return res;
}



int main()
{
    int n;
    cin>>n;
    intialize();
    cout<<"Total number of set bits=>"<<count(n);

    return 0;
}
