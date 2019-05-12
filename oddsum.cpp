#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int j=1;j<=n;j++){

         int a,b;
         cin>>a>>b;
         sum=0;
         for(int i=a;i<=b;i++){
                if(i%2!=0){
                    sum+=i;

                }



         }
         cout<<"Case"<<" "<<j<<":"<<" "<<sum<<endl;


    }





}
