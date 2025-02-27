#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::stringstream ss;
    ss << "Hello" << " " << "World!";
    std::string result = ss.str();
    std::cout << "Concatenated string: " << result << std::endl;
    return 0;
}