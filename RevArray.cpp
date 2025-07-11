#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++; right--;
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}