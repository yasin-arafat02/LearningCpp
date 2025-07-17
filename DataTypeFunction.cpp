#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

double multiply(double a,double b){
    return a*b;
}
bool isEven(int n){
    return n%2==0;
} 
char getGrade(int s){
    if (s >= 90) return 'A';
    else if (s >= 80) return 'B';
    else return 'C';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << boolalpha; // eita diya bool e 1/0 print na kore true and false print kora jay;
    cout << "Sum: " << add(5, 3) << endl;
    cout << "Multiplication: " << multiply(2.5, 4.0) << endl;
    cout << "Is Even: " << isEven(10) << endl;
    cout << "Grade: " << getGrade(85) << endl;

}