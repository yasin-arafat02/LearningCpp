#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int* p = &x;
    cout<<"value of X : "<<x<<endl;
    cout<<"Adress of X : "<<&x<<endl;
    cout<<"value of p :"<<*p<<endl;
    cout<<"Adress of P :"<<p<<endl;

    int arr[3]={12,23,35};
    int* ptr = arr;

    cout<<*ptr<<" ";
    cout<<*(ptr+1)<<" ";
    cout<<*(ptr+2)<<" ";


}