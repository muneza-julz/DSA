#include <iostream>
using namespace std;

// 1. Move classes ABOVE main() so the compiler recognizes them
class student {
private:
    int code;
    string name;
    int age;

public:
    student() {}
    student(int code, string name, int age) {
        this->code = code;
        this->name = name;
        this->age = age;
    }
    
    // Setter
    void set_code(int cd) {
        code = cd;
    }
    
    // 2. Renamed to get_code() for clarity and standard practice
    int get_code() {
        return code;
    }
};

class Animal {
public:
    // 4. Added 'virtual' so that derived classes can correctly override it
    virtual void print() {
        cout << "I am an animal" << endl;
    }
    
    // A virtual destructor ensures child classes clean up properly
    virtual ~Animal() {} 
};

class cat : public Animal {
public:
    void print() override {
        cout << "I am a cat" << endl;
    }
};

class dog : public Animal {
public:
    void print() override {
        cout << "I am a dog" << endl;
    }
};

int main() {
    student s1;
    s1.set_code(1);
    // Updated to use the correct getter name
    cout << "student 1 code is: " << s1.get_code() << endl; 

    Animal *a = new Animal();
    a->print();
    
    Animal *c = new cat();
    c->print(); // Now correctly prints "I am a cat" because of 'virtual'
    
    dog dog1;
    dog1.print();

    // 3. Clean up heap-allocated memory
    delete a;
    delete c;

    return 0;
} // Removed the extra semicolon that was here
