#include <iostream>
using namespace std;
int fibonacci(int n){
    if (n==0)return 0;
    if (n==1)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 7;
    cout<<fibonacci(n)<<endl;
}