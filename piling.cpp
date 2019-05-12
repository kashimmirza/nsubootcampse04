#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,n,ne,p,re;
   cin>>n;
   char s[n];
   ne=0,p=0,re=0;
   for(int i=0;i<n;i++){
       cin>>s[i];


   }
    for(int i=0;i<n;i++){
     if(s[i]=='-'){

        ne++;
     }
     else {


        p++;
     }


   }
   if(ne==p){

    re=p;
   }
   else if(p>ne){
    re=p-ne;
   }
   else if(p<ne){
    re=0;


   }




   cout<<re<<endl;







}
