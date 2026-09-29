#include <iostream>

int main() {
    double value;
    std::cin >> value;

    std::cout << "Original double value: " << value << std::endl;

    int intValue = value;
    std::cout << "Result after implicit casting to int: " << intValue << std::endl;

    float floatValue = value;
    std::cout << "Result after implicit casting to float: " << floatValue << std::endl;

    long long longLongCStyleValue = (long long) value;
    std::cout << "Result after explicit casting to long long (C-style): " << longLongCStyleValue << std::endl;

    long long longLongStaticStyleValue = static_cast<long long>(value);
    std::cout << "Result after explicit casting to long long (static_cast): " << longLongStaticStyleValue << std::endl;

    char charCStyleValue = (char) value;
    std::cout << "Result after explicit casting to char (C-style): " << charCStyleValue << std::endl;

    char charStaticStyleValue = static_cast<char>(value);
    std::cout << "Result after explicit casting to char (static_cast): " << charStaticStyleValue << std::endl;

    return 0;
}
