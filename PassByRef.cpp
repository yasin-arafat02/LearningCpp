#include <iostream>
using namespace std;
//eikhane function e '&' adress use korar karone value change hocche
void change(int &a){
    a = 100;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 10;
    change(n);
    cout<<n<<endl;
}