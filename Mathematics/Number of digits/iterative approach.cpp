
#include <iostream>

using namespace std;

int main()
{
  long int n;
   cin>>n;
   int count=1;
   int num=n;
  
   while(n!=0)
   {
       count++;
       n=n/10;
   }
   if(num==0)
   cout<<"The number of digits are "<<count<<endl;
   else
   cout<<"The number of digits are "<<count-1<<endl;

    return 0;
}
