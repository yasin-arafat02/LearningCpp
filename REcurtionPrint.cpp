#include <iostream>
using namespace std;
void printInt(int n){
    if(n==0)return;
    printInt(n-1);
    cout<<n<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    printInt(n);

}