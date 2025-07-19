#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
     
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
       if(v[i]>max)max=v[i];
    }cout<<max;

}