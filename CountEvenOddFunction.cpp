#include <iostream>
using namespace std;
inline void result(int arr[],int size){
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0)even++;
        else odd++;
    }
    cout<<"Even is : "<<even<<endl<<"Odd is : "<<odd<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {15, 22, 7, 30, 44, 10, 18, 27, 50, 33};
    int size = sizeof(arr)/sizeof(arr[0]);
    result(arr,size);

}