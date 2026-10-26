#include<iostream>
using namespace std;
class student{
    public:
    int code; 
    string name;
    int age;
    student(){}
    student(int code, string name, int age){
        this->code = code;
        this->name = name;
        this->age = age;
    }
    void print(){
        cout<<"Code: "<<this->code<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
    }

};
int main(){
    student s1;
    s1.name = "Alice";
    s1.age = 15;
    s1.code = 101;
    s1.print();
    student s2(1, "Alice", 20);
    s2.print();
    student s3(1085, "Mugisha", 17);
    s3.print();
    student *s4 = new student(100, "John", 18);
    s4->print();
}