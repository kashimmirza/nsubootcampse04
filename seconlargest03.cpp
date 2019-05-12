#include<bits/stdc++.h>

using namespace std;
int main(){
   int n, a,b,c;
   cin>>n;
   int max=0,se=0;
   while(n--){
     cin>>a>>b>>c;
     if(a>b){

        max=a;
        if(c>max){
            max=c;
        }
     }
     else if(b>a){
        max=b;
        if(c>max){

            max=c;
        }
     }
     if(a<max&&a>c||a<max&&a>b){
        se=a;
     }
     else if(b<max&&b>c||b<max&&b>a){

        se=b;
     }
     else
        se=c;



        cout<<se<<endl;




   }





}
