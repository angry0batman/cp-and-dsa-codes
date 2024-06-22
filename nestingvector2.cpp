#include <bits/stdc++.h>
using namespace std;

void PrintVector(vector<int> v) {
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl; 
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        vector<int> temp;
        for (int j = 0; j < a; ++j) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); ++i) {
        PrintVector(v[i]);
    }
}
