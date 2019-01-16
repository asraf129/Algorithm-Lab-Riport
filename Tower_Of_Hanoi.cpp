#include<bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int n,int a,int b,int c){
    if(n>=1){
        TowerOfHanoi(n-1,a,c,b);
        cout<<"Move A Discs from"<<a<<"to"<<c<<endl;
        TowerOfHanoi(n-1,b,a,c);

    }
}
int main()
{
    int n,a,b,c;
    cout<<"N=";
    cin>>n;
    cout<<"Enter three towers"<<endl;
    cin>>a>>b>>c;
    TowerOfHanoi(n,a,b,c);
    return 0;
}
