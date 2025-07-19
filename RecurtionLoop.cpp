#include <iostream>
using namespace std;
void mahmuda(int n){
    if (n==0)return;
    cout<<"Hello, Mahmuda"<<endl;
    return mahmuda(n-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    mahmuda(n);

}