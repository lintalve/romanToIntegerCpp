#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Member function to set the name
    void setName(const std::string& newName) {
        name = newName;
    }

    // Member function to set the age
    void setAge(int newAge) {
        age = newAge;
    }

    // Member function to display person's information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create an instance of the Person class
    Person person1("Alice", 30);

    // Access and modify the object's properties
    person1.setName("Bob");
    person1.setAge(25);

    // Display the person's information
    person1.display();

    return 0;
}
