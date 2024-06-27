#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7;

int main(){

   double n;
   cin>>n;
   double lo=1,hi=n,mid;
   while(hi-lo>eps){
      mid=(hi+lo)/2;
      if(mid*mid<n){
         lo=mid;
      }
      else{
         hi=mid;
      }
   }
   cout<<"Square root is:"<<lo<<endl;


}