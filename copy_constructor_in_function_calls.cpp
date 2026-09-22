#include <iostream>
#include <string>

class Box {
    int length;

public:
    Box(int length) {
        this->length = length;
        std::cout << "Constructor called\n";
    }

    Box(const Box &box) {
        length = box.length;
        std::cout << "Copy Constructor called\n";
    }

    void display() {
        std::cout << "Length = " << length << std::endl;
    }

    ~Box() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    int length;
    std::cin >> length;

    Box box1(length);
    Box box2 = box1;
    box1.display();

    return 0;
}
