#include <iostream>
using namespace std;
int main(){
    int age, dob;
    string firstName, homeAddress, job;

    cout<<"Enter your name"<< "\t";
    cin.ignore(); // To ignore the newline character left in the input buffer after reading age
    getline(cin, firstName);

    cout<<"Enter you age: "<< "\t";
    cin>>age;

    cout<<"Enter your date of birth: "<< "\t";
    cin>>dob;

    cout<<"Enter your home address: "<< "\t";
    cin.ignore();
    getline(cin, homeAddress);

    cout<<"Ton metier est: "<< "\t";
    cin.ignore();
    getline(cin, job);


    cout<<firstName<<", you're "<<age<<" years old"<<endl;


}