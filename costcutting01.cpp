#include<bits/stdc++.h>
using namespace std;
int main(){

 int a, b,c,t,max,se;
 cin>>t;
 for(int i=1;i<=t;i++){
    cin>>a>>b>>c;
    max=0,se=0;
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
    if(a<max&&a>b||a<max&&a>c){

        se=a;
    }


    else if(b<max&&b>a||b<max&&b>c){
            se=b;



    }
    else if(c<max&&c>a||c<max&&c>b){


        se=c;
    }











 cout<<"Case"<<" "<<i<<":"<<" "<<se<<endl;




}
}
