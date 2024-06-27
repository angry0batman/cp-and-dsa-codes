#include<bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string>m;
    m[1]="abc";
    m[5]="bcci";
    m[3]="India";
    auto it=m.find(7);
    if(it!=m.end())
    // if(it==m.end()){
    //     cout<<"No Value"<<endl;
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    m.erase(it);
    print(m);
    
}