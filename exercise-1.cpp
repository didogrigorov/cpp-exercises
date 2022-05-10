#include <iostream>

int main() {
    // Write C++ code here
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;
    
    if (a == b) {
        std::cout << (a + b) * 3 << std::endl;
    }
    
    else {
        std::cout << a + b << std::endl;
    }

    return 0;
}
