#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int arr[n];
    int* ptr = arr;
    int max = INT16_MIN , min = INT16_MAX;
    for (int i = 0; i < n; i++)cin>>*(ptr+i);
    for (int i = 0; i < n; i++)
    {
        if (*(ptr+i)>max)
        {
            
        }
        
    }
    
    

}