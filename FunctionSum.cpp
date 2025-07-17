#include <iostream>
using namespace std;

void modify (int &a,int &b){
    if (a > b) {
        a = a * 2;
        b = b + 5;
    } else {
        b = b * 2;
        a = a + 5;
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;cin>>a>>b;
    modify(a,b);
    cout<<a<<" "<<b;

}