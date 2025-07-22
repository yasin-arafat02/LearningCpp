#include <iostream>
#include <climits>
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
    int frq ;cin>>frq;
    int count=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(frq==v[i])count++;
    }
    cout<<count;
}