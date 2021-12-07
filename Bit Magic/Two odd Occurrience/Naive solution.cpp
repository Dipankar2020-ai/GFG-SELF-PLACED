#include <iostream>

using namespace std;
void twooddones(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)   //Time complexity is o(n^2)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
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
