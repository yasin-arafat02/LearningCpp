#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;cin>>x;
        v.push_back(x);
    }
    cout<<"Size before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"Size  clear: "<<v.size()<<endl;

}