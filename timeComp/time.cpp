#include <iostream>
#include <string>
using namespace std;

// Base (Parent) Class
class Person {
private:
    // Encapsulated private fields
    string name;
    int age;

public:
    // Constructor
    Person(string personName, int personAge) 
        : name(personName), age(personAge) {}

    // Getter methods for encapsulated private fields
    string getName() const { return name; }
    int getAge() const { return age; }

    void printPersonDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived (Child) Class inheriting from Person using the colon operator (:)
class Student : public Person {
private:
    // Child class private field
    int studentId;

public:
    // Constructor calling base class constructor and initializing studentId
    Student(string personName, int personAge, int id) 
        : Person(personName, personAge), studentId(id) {}

    // Getter method for child class private field
    int getStudentId() const { return studentId; }

    void printStudentDetails() const {
        // Calling inherited method from Person base class
        printPersonDetails(); 
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    // Instantiating child class object on the stack
    Student student1("Alice", 20, 1001);

    cout << "--- Student Details ---" << endl;
    student1.printStudentDetails();

    cout << "\n--- Accessing Encapsulated Fields via Getters ---" << endl;
    cout << "Inherited Name (Getter): " << student1.getName() << endl;
    cout << "Student ID (Getter): " << student1.getStudentId() << endl;

    return 0;
}