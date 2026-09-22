#include <iostream>

class Array {
    int *value;

public:
    Array(int value) {
        this->value = new int(value);
        std::cout << "Original value: " << value << std::endl;
    }

    Array(const Array &array) {
        value = new int(*array.value);
        std::cout << "Copied value: " << *value << std::endl;
    }

    void setValue(int newValue) {
        *value = newValue;
    }

    void getValue(std::string text) {
        std::cout << text << *value << std::endl;
    }

    ~Array() {
        delete value;
    }
};

int main() {
    int value, newValue;
    std::cin >> value;
    std::cin >> newValue;

    Array arr1(value);
    Array arr2 = arr1;

    std::cout << "\nAfter modifying copied object:\n";

    arr2.setValue(newValue);

    arr1.getValue("Original value: ");
    arr2.getValue("Copied value: ");

    return 0;
}
