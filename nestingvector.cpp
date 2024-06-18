#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>>v){
    for(int i=0;i<v.size();++i){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
    vector<pair<int,int> >v={{1,2},{3,4},{5,6}};
    print(v);

}