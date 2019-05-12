#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],sumodd=0,indexodd,sumeven=0,indexeven;
    for(int i=0;i<n;i++){
        cin>>a[i];


    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            sumodd++;
            indexodd=i+1;

        }
        else if(a[i]%2==0){
            sumeven++;
            indexeven=i+1;


        }
    }
        if(sumodd==1){
            cout<<indexodd<<endl;

        }
        else
            cout<<indexeven<<endl;













}



