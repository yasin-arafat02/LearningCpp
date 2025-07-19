#include <iostream>
using namespace std;
int Search (int arr[],int n,int x,int index=0){
    if(index == n)return -1;
    if(arr[index]==x)return index;
    return Search(arr,n,x,index+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    cin>>x;

    cout<<Search(arr,n,x);

}