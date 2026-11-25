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

int sumOD( int x) {
    x = abs(x);
    if(x < 10){
        return x;
    }
    int smallNbr = sumOD(x/10);
    return x%10 + smallNbr;
}

int main() {
    cout<< "2 power 5 is: "<<  pow(-5,3) << endl;
    char n,a,b,c,d;
    cin>>n;
    // cout<< "the sum of digits of 598471 is: " << sumOD(598471) << endl;
    cout<< "the sum of n is: " << sumOD(n) << endl;
    
}