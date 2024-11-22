#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    cout<<"Sum of positive array Elements: "<<sum;
return 0;
}
