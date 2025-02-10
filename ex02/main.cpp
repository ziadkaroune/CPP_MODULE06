#include "Base.hpp" 

int main() {
    Base* p1 = generate();  // Generate a random instance of A, B, or C
    Base* p2 = generate();  // Another random instance

    // Use the pointer-based identify function
    std::cout << "Pointer-based identify:" << std::endl;
    identify(p1);  // Identifies the type of p1
    identify(p2);  // Identifies the type of p2

    std::cout << std::endl;

    // Use the reference-based identify function
    std::cout << "Reference-based identify:" << std::endl;
    identify(*p1);  // Identifies the type of *p1 (dereferencing p1)
    identify(*p2);  // Identifies the type of *p2 (dereferencing p2)

    // Clean up
    delete p1;
    delete p2;

    return 0;
}
