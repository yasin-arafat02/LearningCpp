#include <iostream>
using namespace std;

bool isSorted(int arr[],int n,int index = 0){
    if(index == n-1)return true;
    if(arr[index]>arr[index+1])return false;
    return isSorted(arr,n,index+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];

    if(isSorted(arr,n))cout<<"Sorted"<<endl;
    else cout<<"Unsorted"<<endl;

}