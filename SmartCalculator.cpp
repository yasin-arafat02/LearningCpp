#include <iostream>
using namespace std;
int Calculator(int a,int b){
    return a+b;
}
double  Calculator(double a,double b){
    return a*b;
}
int Calculator(int a,int b,int c){
    return (a+b+c)/3;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<Calculator(2,5)<<endl;
    cout<<Calculator(2.5 , 3.5)<<endl;
    cout<<Calculator(10,20,30)<<endl;

}