#include <iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int arr[n];
    int* ptr = arr;
    for (int i = 0; i < n; i++)cin>>*(ptr+i);
    swap((ptr),(ptr+n-1));

    for (int i = 0; i < n; i++)cout<<*(ptr+i)<<" ";
}