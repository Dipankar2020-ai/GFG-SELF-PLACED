
#include <iostream>

using namespace std;
void twooddones(int arr[],int n)
{
  int xor1=0,res1=0,res2=0;
  for(int i=0;i<n;i++)
  {
      xor1=xor1^arr[i];
  }
  int sn=(xor1)&(~(xor1-1));
  for(int i=0;i<n;i++)   //Time complexity is o(n)
  {
      if((arr[i]&sn)!=0)
      {
          res1=res1^arr[i];
      }
      else
      {
          res2=res2^arr[i];
      }
  }
  cout<<res1<<" "<<res2<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    twooddones(arr,n);
    return 0;
}
