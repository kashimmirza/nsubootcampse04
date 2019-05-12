#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;



    }
    cout<<sum<<endl;
    }






}
