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
      ScalarConverter() throw();
        ScalarConverter( const ScalarConverter &copy)throw();
         ScalarConverter& operator=(const ScalarConverter &copy)throw();
       ~ScalarConverter()throw();

    public :
        static  void converter(std::string literal) throw();

};

#endif