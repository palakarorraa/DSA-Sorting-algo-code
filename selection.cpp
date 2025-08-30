#include<iostream>
using namespace std;
int main()
{
    int n,i,j,min,ar[50],temp;
    cout<<"Enter array element  : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter value : ";
        cin>>ar[i];
    }

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++){
            if (ar[j] < ar[min])
            {
                min = j;
                
            }
        }
        if(min != i)
        {
            temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
        }
                
    }

    cout<<"Sorted array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;

}