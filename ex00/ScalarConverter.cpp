#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string string)
{

}

void ScalarConverter::converter(std::string string)
{
   
        int int_num = std::stoi(string);  
        float float_num = std::stof(string);   
        double double_num = std::stod(string);
        
        std::cout << "int : " << int_num<< std::endl;
        std::cout << "float : " << float_num << "f"<< std::endl;
        std::cout << "Double : " << double_num << std::endl;
        return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    return (*this);
}

ScalarConverter::~ScalarConverter()
{

      std::cout << "youu class is destrcuted" << std::endl;
}