#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int even=0,odd=0;
    for(int x : v){
        if(x%2==0)even++;
        else odd++;
    }
    cout<<even<<endl;
    cout<<odd;
        
}