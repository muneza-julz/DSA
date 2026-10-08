#include<iostream>
using namespace std;

// Changed to lowercase 'typename'
template <typename T> 
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main(){
    double pi = 3.13358589892959352953;
    double e = 1.2e-4;

    // Fixed: 5 changed to 5.0 so all arguments are doubles
    float z = add(10.234, 10.3, 5.0); 
    cout << "The sum is: " << z << endl;

    int y = add(23, 58);
    cout << "The sum is: " << y << endl; 

    double x = add(10.2, e);
    cout << "The sum is: " << x << endl;
}
