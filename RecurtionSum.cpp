#include <iostream>
using namespace std;
int Sum(int n){
    if(n==0) return 0;
    return n + Sum(n-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    cout<<Sum(n);

}