#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)throw()
{
}


void ScalarConverter::converter(std::string  literal)throw()
{
        try{
            
            double double_num = std::stod(literal); 
            if (std::isinf(double_num)) ///////// +inf && -inf
            {
                std::cout << "char: impossible\n";
                std::cout << "int: impossible\n";
                std::cout << "float: " << (double_num > 0 ? "+inff" : "-inff") << std::endl;
                std::cout << "double: " << (double_num > 0 ? "+inf" : "-inf") << std::endl;
                return;
            }
            else if(std::isnan(double_num))
            {
                  std::cout << "char: impossible\n";
                std::cout << "int : nan\n";
                std::cout << "float : nan" <<  std::endl;
                std::cout << "double : nan "<< std::endl;
            }

            else{

                    int int_num = std::stoi( literal);  
                    float float_num = std::stof( literal);   
            
                    std::cout << "char  : ";  //// char
                        if (int_num >= 32 && int_num <= 126) /// check if its deplayable
                            std::cout << static_cast<char>(int_num)<< std::endl;
                        else
                            std::cout << "Non-displayable" << std::endl;

                    
                        std::cout << "int : " << int_num<< std::endl;  // int 
                        std::cout << std::fixed << std::setprecision(1);  
                        std::cout << "float : " << float_num << "f"<< std::endl; //float
                        std::cout << "Double : " << double_num << std::endl;    // double
            }
          
        }
         catch (const std::out_of_range &)  //  literal > INT_MAX || literal < INT_MIN
         {
                  std::cout << " char  : impossible\n int  : OUT OF RANGE \n float : impossible\n double : impossible\n " << std::endl ;
         }

         catch (const std::invalid_argument &)   // invalid conversion 
        {
                std::cout << " char  : impossible\n int  : impossible\n float : impossible\n double : impossible\n " << std::endl ;
        }

        
        return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)throw()
{
    *this = copy;

}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)throw()
{

    return (*this);
}

ScalarConverter::~ScalarConverter()throw()
{

      std::cout << "youu class is destrcuted" << std::endl;
}