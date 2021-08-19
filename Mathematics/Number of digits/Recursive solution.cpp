#include <iostream>

using namespace std;
int numberofdigits(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    return 1+numberofdigits(n/10);
}
int main()
{
  long int n;
   cin>>n;
   if(n==0)
   {
       cout<<"the number of digits are "<<1<<endl;
   }
   else
   {
   cout<<"the number of digits are "<<numberofdigits(n)<<endl;
   }
}
