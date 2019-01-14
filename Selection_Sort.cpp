#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp,Arr[50];
    cout<<"Size of the Array=";
    cin>>n;
    cout<<"Enter Elements of the Array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(Arr[i]>Arr[j])
            {
                temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
    }
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
