#include<iostream>
using  namespace std;
int main()
{
    int arr[9],i,t,p;
    for(i=0;i<9;i++)
    {
        cout<<"Enter the value:";
        cin>>arr[i];
    }
    for(i=1;i<9;i++)
    {
        t=arr[i];
        p=i-1;

        while(p>=0 && arr[p]>t){
            arr[p+1]=arr[p];
            p=p-1;
        }
        arr[p+1]=t;
    }
    cout<<"After insertion sorting, the sorted array is:";
    for(i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}