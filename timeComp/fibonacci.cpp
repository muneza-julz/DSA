#include<iostream>
using namespace std;

int fibonacci(int n){
    //base case: f(0) 
    if(n == 0) return 0;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n=7;

    for(int i=0; i<=n; i++){
        cout<<fibonacci(i)<< " ";
    }
    cout<<endl;
}