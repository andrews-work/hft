#include <iostream>

namespace test {  // Declare that 'test' namespace will be used
    void printMessage();  // Declare the function
}

int main() {
    test::printMessage();  // Use the namespaced function
    return 0;
}
