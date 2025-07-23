#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
     while (t--)
     {
        int n;cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<" "<<"\n";
        v.clear();
     }
     

}