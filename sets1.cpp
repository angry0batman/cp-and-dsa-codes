#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string>s;
    s.insert("abc");
    s.insert("zwgf");
    s.insert("def");
    for(auto pr : s){
        cout<< pr<< endl;
    }
}