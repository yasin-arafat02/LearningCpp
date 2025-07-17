#include <iostream>
#include <iomanip>//30.0 anar jonno (double er point er por koto digit thakbe oita control er jonno)
using namespace std;
 
void PrintArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

inline double avg(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum/size;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,size);
    cout<<fixed<<setprecision(1);//30.0 anar jonno 
    cout<<avg(arr,size)<<endl;

}