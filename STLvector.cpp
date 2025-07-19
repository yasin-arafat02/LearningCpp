#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>n;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    
    for (int i = 0; i < n.size(); i++)
    {
        cout<<n[i]<<endl;
    }
    

}