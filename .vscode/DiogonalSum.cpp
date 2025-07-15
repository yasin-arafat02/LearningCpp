#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)cin>>arr[i][j];
    }
    int l = 0,r = 0;

    for (int i = 0; i < n; i++){
            l+=arr[i][i];
            r+=arr[i][n-1-i];
    }
    cout<<l<<endl;
    cout<<r;
}