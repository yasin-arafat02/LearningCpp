#include <iostream>
using namespace std;

int main() {
    int n, m;cin>>n>> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)cin >> arr[i][j];
    }
    int sum = 0;
    if (n == m){
        for (int i = 0; i < n; i++)sum += arr[i][i];
        cout << "Left Diagonal Sum = " << sum << endl;
    } else cout << "Diagonal not defined (Matrix not square)" << endl;

}