#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip> 
#include <sstream>
#include <limits>
#include <string>
class ScalarConverter 
{
    private :

    public :
        ScalarConverter(std::string string);
        ScalarConverter( const ScalarConverter &copy);
        virtual void converter(std::string string) = 0 ;
        ScalarConverter& operator=(const ScalarConverter &copy);
        ~ScalarConverter();
};

#endif