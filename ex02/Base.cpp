#include "Base.hpp"

Base* generate(void) {
    srand(static_cast<unsigned int>(time(0))); 
    int randValue = rand() % 3;   //0 -> 2
 
    if (randValue == 0)
        return new A();
    else if (randValue == 1)
        return new B();
    else
        return new C();
}

// identify object type via pointer
void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

// via reference
void identify(Base& p) {
    try {
        A& aRef = dynamic_cast<A&>(p);  
        std::cout << "A" << std::endl;
        (void)aRef;  
    } catch (std::bad_cast&) {}

    try {
        B& bRef = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)bRef; 
    } catch (std::bad_cast&) {}

    try {
        C& cRef = dynamic_cast<C&>(p); 
        std::cout << "C" << std::endl;
        (void)cRef;  // 
    } catch (std::bad_cast&) {}
}
