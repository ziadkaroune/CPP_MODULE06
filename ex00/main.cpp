#include "ScalarConverter.hpp"

int main(int ac , char **av)
{
    if(ac != 2)
        std::cout << "error : bad argument ./converter <arg>" << std::endl;
    else   
        ScalarConverter op(av[1]);
    return 0;


}