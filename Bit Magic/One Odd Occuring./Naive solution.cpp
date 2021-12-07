#include <iostream>

using namespace std;
int oneoddoccuring(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])     //Time Complexity is o(n^2)
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            return arr[i];
        }
    }
    return 0;
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
    cout<<oneoddoccuring(arr,n)<<endl;

    return 0;
}
