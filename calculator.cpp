#include<iostream>
#include<math.h>

using namespace std;

// 1. My global variable
int myGlobal = 20;

int cout(){
    return ::myGlobal * ::myGlobal;
}

// 2. My namespace called cout
namespace userDefined{
    int value = 50;

    int cout(){
        return ::myGlobal * ::myGlobal;
    }
    
}
int main() {
    int cout = 10;
    
    std::cout << "Local variable cout in main is: " << cout << std::endl;
    std::cout << "The variable in userDefined namespace is: " << userDefined::value << std::endl;  
    std::cout << "The output of cout() in userDefined is: " << userDefined::cout() << std::endl; 
    std::cout << "The value of myGlobal is: " << ::myGlobal << std::endl;  
    std::cout <<"The output of global cout() is: " << ::cout() << std::endl;  

}