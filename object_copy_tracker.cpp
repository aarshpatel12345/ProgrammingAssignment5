#include <iostream>
#include <string>

class Student {
    std::string name;
    int rollNo;

public:
    Student(std::string name, int rollNo) {
        this->name = name;
        this->rollNo = rollNo;
        std::cout << "Constructor called for Student " << rollNo << std::endl;
    }

    Student(const Student &student) {
        name = student.name;
        rollNo = student.rollNo;
        std::cout << "Copy Constructor called for Student " << rollNo << std::endl;
    }

    ~Student() {
        std::cout << "Destructor called for Student " << rollNo << std::endl;
    }
};

int main() {
    std::string name;
    std::getline(std::cin, name);

    int rollNo;
    std::cin >> rollNo;

    Student student1(name, rollNo);
    Student student2 = student1;

    return 0;
}
