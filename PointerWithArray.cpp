#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    int* p = arr;
    int sum = 0;
    for (int i = 0; i < 5; i++)cin>>arr[i];
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(p++);
    }
    cout<<sum;
}