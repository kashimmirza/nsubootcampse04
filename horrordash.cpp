#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   for(int i=1;i<=t;i++){
       int n;
       cin>>n;
       int a[n];
       for(int j=0;j<n;j++){
          cin>>a[j];



       }
       int max =a[0];
       for(int j=1;j<n;j++){

        if(a[j]>max){
            max=a[j];


        }
       }
       cout<<"Case"<<" "<<i<<":"<<" "<<max<<endl;



   }







}
