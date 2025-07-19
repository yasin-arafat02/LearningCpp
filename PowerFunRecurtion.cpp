#include <iostream>
using namespace std;
int power (int n,int m){
    if (m==0) return 1;
    return n * power (n,m-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;cin>>n>>m;
    cout<<power(n,m);

}