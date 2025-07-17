#include <iostream>
using namespace std;
bool result(int a){
   if(a>39){
    return true;
   }
   else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<boolalpha;
    cout<<result(5)<<endl;
    cout<<result(60)<<endl;
    cout<<result(39)<<endl;

}