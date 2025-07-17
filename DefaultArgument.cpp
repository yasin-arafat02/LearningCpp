#include <iostream>
using namespace std;
void greet(string name = "All"){
    cout<<"Hello, "<<name<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    greet();
    greet("Shibloo");
}