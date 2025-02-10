  #include "Serializer.hpp"
    
    Serializer::Serializer(void)
    {
        std::cout << "class is creating" <<std::endl;
    }
     Serializer::Serializer(const  Serializer &copy)
     {
        *this = copy;
     }
     Serializer &Serializer::operator=(const  Serializer &copy)
     {
        return (*this);
     }
    Serializer::~Serializer(void)
    {
           std::cout << "class is destructing" <<std::endl;
    }

    uintptr_t Serializer::serialize(Data* ptr)   /// from ptr adress to intt
    {
        return (reinterpret_cast<uintptr_t>(ptr));
    }
    Data*   Serializer::deserialize(uintptr_t raw)  // inverse order
    {
        return (reinterpret_cast<Data*>(raw));
    }