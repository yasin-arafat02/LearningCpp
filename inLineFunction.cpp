#include <iostream>
#include <cmath>
using namespace std;

inline int cube(int x){
    return (int)pow(x,3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<"Cube of "<<3<<" is : "<<cube(3)<<endl;
    cout<<"Cube of "<<5<<" is : "<<cube(5)<<endl;

}