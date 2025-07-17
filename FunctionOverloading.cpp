#include <iostream>
using namespace std;
//Same function name but different parameters//
//multiple function thakle kon function kaj korbe oita depend korbe parameter er upor//
void greet(){
    cout<<"Hello"<<endl;
}
void greet(string s){
    cout<<s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    greet();
    greet("Mahmuda");

}