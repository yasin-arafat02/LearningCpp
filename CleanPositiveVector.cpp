#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        if (x>0)
        {
            v.push_back(x);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    

}