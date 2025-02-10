#include "Serializer.hpp"
#include <iostream>

int main() {
    
    Data myData;
    myData.x = 42;
    myData.name = "Hello, World!";

 
    std::cout << "Original Data pointer: " << &myData << std::endl;
    std::cout << "Original Data.x = " << myData.x << std::endl;
    std::cout << "Original Data.name = " << myData.name << std::endl;

 
    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "\nSerialized (uintptr_t): " << raw << std::endl;
 
    Data* deserializedPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized Data pointer: " << deserializedPtr << std::endl;

   

    return 0;
}
