#include <iostream>
using namespace std;
int power(int base ,int exponent = 2){
    return pow(base,exponent);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<power(5)<<endl;//eikhane default 2 niye nicche
    cout<<power(5,3)<<endl;//eikhane function er parameter 2 chang kore 3 kortise
}