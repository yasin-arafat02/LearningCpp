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
    
    if(v.empty())
        cout<<"Vector is empty"<<endl;

    else cout<<"Vector is not empty"<<endl;
}