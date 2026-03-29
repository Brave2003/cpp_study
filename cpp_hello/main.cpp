#include <iostream>
#include <vector>
#include <string>
#include <limits>

int main() {
    std::vector<std::string> msg {"Hello", "C++", "in", "WSL2", "on", "D:", "Drive!"};
    for (const std::string& word : msg) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}