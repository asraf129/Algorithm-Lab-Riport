#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],minimum,i,n;
    cout<<"Size of the Array =";
    cin>>n;
    cout<<"Elements of the Array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    minimum=arr[0];
    for(i=1;i<n;i++){
        if(minimum>arr[i])
            minimum=arr[i];
    }
    cout<<"Minimum Number Present in the given Array="<<minimum<<endl;
    return 0;
}

