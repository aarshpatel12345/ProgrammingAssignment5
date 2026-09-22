#include <iostream>

class Array {
    int *value;

public:
    Array(int value) {
        this->value = new int(value);
        std::cout << "Original value: " << value << std::endl;
    }

    Array(Array &array) {
        value = array.value;
        std::cout << "Copied value: " << *value << std::endl;
    }

    void update(int newValue) {
        *value = newValue;
    }

    void display(std::string text) {
        std::cout << text << *value << std::endl;
    }

    ~Array() = default;
};

int main() {
    int value, updateValue;
    std::cin >> value;
    std::cin >> updateValue;

    Array arr1(value);
    Array arr2 = arr1;

    std::cout << "\nAfter modifying copied object: \n";
    arr2.update(updateValue);

    arr1.display("Original value: ");
    arr2.display("Copied value: ");

    return 0;
}
