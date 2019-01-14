#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],maximum,i,n;
    cout<<"Size of the Array =";
    cin>>n;
    cout<<"Elements of the Array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    maximum=arr[0];
    for(i=1;i<n;i++){
        if(maximum<arr[i])
            maximum=arr[i];
    }
    cout<<"Maximum Number Present in the given Array="<<maximum<<endl;
    return 0;
}
