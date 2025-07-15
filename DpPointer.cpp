#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)arr[i] = i+10;
    for (int i = 0; i < n; i++)cout<<arr[i]<<" ";
    cout<<endl;
     delete [] arr;
    

}