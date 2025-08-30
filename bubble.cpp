#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp,ar[50];
    cout<<"Enter array element  : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter value : ";
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}