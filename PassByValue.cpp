#include <iostream>
using namespace std;

//Eikhane amader Function er karone Value er kono change hoy na

void  change (int a){
    a = 100;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 10;
    change(n); 
    cout<<n<<endl;
    
}