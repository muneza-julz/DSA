#include<iostream>
using namespace std;

// 1. Your original global variable
int value = 20;

// 2. Creating your custom namespace
namespace custom {
    int value = 99; // A random value isolated inside this namespace

    int square(int x) {
        return x * x;
    }
}

int main(){
    // 3. Your original local variable
    int value = 10; 
    
    // Outputting the Local variable
    cout << "Local value: " << value << endl;
    
    // Outputting the Global variable (using empty ::)
    cout << "Global value: " << ::value << endl;
    
    // Outputting the Namespace variable (using namespace_name::)
    cout << "Namespace value: " << custom::value << endl;

    // Squaring the value of the namespace variable
    custom::value = custom::square(custom::value);
    cout << "Squared namespace value: " << custom::value << endl;
    
    return 0;
}
