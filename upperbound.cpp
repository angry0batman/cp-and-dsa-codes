#include <bits/stdc++.h>
using namespace std;

int upperbound(vector<int>&v,int element){
    int lo=0;
    int hi=v.size()-1;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<=element){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(v[lo]>element){
        return lo;
    }
    if(v[hi]>element){
        return hi;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int element;
    cin>>element;
    cout<<upperbound(v,element);

}