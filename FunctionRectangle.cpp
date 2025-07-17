#include <iostream>
using namespace std;
void rectangle(int width=7,int height=5){
    for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
        cout<<"*";
    }
    cout<<endl;
     }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    rectangle(5,3);
    cout<<endl;
    rectangle();
}