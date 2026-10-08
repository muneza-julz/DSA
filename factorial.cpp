#include<iostream>
using namespace std;
#include<math.h>

int power(int x, int n){
        if(n==0){
            return 1;
        }
        int smallAnswer = power(x,n-1);
        return x*smallAnswer;
    }

int sum( int x) {
    x = abs(x);
    if(x < 10){
        return x;
    }
    int smallNbr = sum(x/10);
    return x%10 + smallNbr;
}

int main() {
    cout<< "2 power 5 is: "<<  power(2,5) << endl;
    cout<< "the sum of digits of 598471 is: " << sum(598471) << endl;
    cout<< "the sum of -12345 is: " << sum(-12345) << endl;
    
}