/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeRecognizer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:50:45 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/22 21:11:41 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typeRecognizer.hpp"

typeRecognizer::typeRecognizer()
{
    // std::cout << "#" << std::setw(46) << "typeRecognizer Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

bool inf_case(std::string &input){
    return (!input.compare("+inf") || !input.compare("-inf") \
            || !input.compare("+inff") || !input.compare("-inff"));
}

bool nanCase(std::string &input){
    return (!input.compare("nan") || !input.compare("nanf"));
}

typeRecognizer::typeRecognizer(std::string &input)
{
    typeFinder(input);
    if (DataType == UNDEFINED)
    {
        if (inf_case(input)) {
            
            std::cout << "char   : [impossible]" << std::endl;
            std::cout << "int    : [" << input[0] << "inf ]" << std::endl;
            std::cout << "float  : [" << input[0] << "inff]" <<std::endl;
            std::cout << "double : [" << input[0] << "inf ]" <<std::endl;  
        }
        else if (nanCase(input)){
            std::cout << "char   : [impossible]" << std::endl;
            std::cout << "int    : [impossible]" << std::endl;
            std::cout << "float  : [nanf]" <<std::endl;
            std::cout << "double : [nan]" <<std::endl;
        }
        else{
            std::cout << "char   : [impossible]" << std::endl;
            std::cout << "int    : [impossible]" << std::endl;
            std::cout << "float  : [impossible]" <<std::endl;
            std::cout << "double : [impossible]" <<std::endl;
        }
    }
    
    else if (DataType == INT)
    {
        try{
            ToCharr(input); 
    }
    catch (std::exception &ex){
        std::cout << "char   : [" << ex.what() << "]" << std::endl;
    }
        std::cout << "int    : [" << ToInt(input) << "]" <<std::endl;
        std::cout << "float  : [" << static_cast<float>(ToInt(input)) << ".0f"<< "]" <<std::endl;
        std::cout << "double : [" << static_cast<double>(ToInt(input)) << ".0 "<< "]" <<std::endl;
    }
    
    else if (DataType == CHAR){
        try{
            ToCharr(input); 
    }
    catch (std::exception &ex){
        std::cout << "char   : [" << ex.what() << "]" << std::endl;
    }
        // std::cout << "char   : [" << Aschar << "]" << std::endl;
        std::cout << "int    : [" << static_cast <int>    (Aschar) << "]" << std::endl;
        std::cout << "float  : [" << static_cast <float>  (Aschar) << ".0f]" <<std::endl;
        std::cout << "double : [" << static_cast <double> (Aschar) << ".0]" <<std::endl;
    }
    
   else if (DataType == DOUBLE){
    try{
        Asint = static_cast<int>(Asdouble);
        ToCharr(input);
        
    } catch (std::exception &ex){
        std::cout << "char   : [" << ex.what() << "]" << std::endl;
    }
        std::cout << "int    : [" << static_cast<int> (Asdouble)  << "]" <<std::endl;
        std::cout << "float  : [" << std::fixed << static_cast<float>(Asdouble) << "f]" <<std::endl;
        std::cout << "double : [" << Asdouble <<"]"<< std::endl;  
    }
   
   else if (DataType == FLOAT){
    try{
        Asint = static_cast<int>(Asfloat);
        ToCharr(input);
        
    } catch (std::exception &ex){
        std::cout << "char   : [" << ex.what() << "]" << std::endl;
    }
        std::cout << "int    : [" << static_cast<int> (Asfloat)  << "]" <<std::endl;
        std::cout << "float  : [" << std::fixed << Asfloat << "f]" <<std::endl;
        std::cout << "double : [" << static_cast<double>(Asfloat) <<"]"<< std::endl;  
    }
}

void   typeRecognizer::ToCharr(std::string& input)
{
    static_cast<void>(input);
    if (Asint >= 32 && Asint <= 127)
    {
        std::cout << "char   : [" << static_cast<char>(Asint) << "]" << std::endl;
        return ;
    }
    else if (Asint >= 0 && Asint <= 31)
        throw nonDisplayable();
    else
        throw Impossible();
}

typeRecognizer::typeRecognizer(const typeRecognizer &Obj)
{
    std::cout << "#" << std::setw(43) << "typeRecognizer Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    *this = Obj;
}

typeRecognizer::~typeRecognizer()
{
    // std::cout << "#" << std::setw(40) << "typeRecognizer  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

typeRecognizer & typeRecognizer::operator=(const typeRecognizer &Origine)
 {
     std::cout << "#" << std::setw(51) << "typeRecognizer Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     if (this != &Origine)
     {
        this->Aschar   = Origine.Aschar;
        this->Asint    = Origine.Asint;
        this->Asfloat  = Origine.Asfloat;
        this->Asdouble = Origine.Asdouble;
     }
     return (*this);
 }

const char* typeRecognizer::nonDisplayable::what() const _NOEXCEPT
{
    return (" Non displayable ");   
}

const char* typeRecognizer::Impossible::what() const _NOEXCEPT
{
    return (" Impossible ");   
}

bool   typeRecognizer::typeISint(std::string &input)
{
    int i (0);

    if (input.length() == 0)
        return (0);
    if (input[i] == '-' || input[i] == '+')
        i++;
    if (!input[i])
        return (0);
    while(input[i]){
        if (!std::isdigit(input[i]))
            return (0);
        i++;
    }
    std::stringstream(input) >> Asint;
    return (1);
}

bool   typeRecognizer::typeISchar(std::string &input)
{
    if (inputLen == 1 || !inputLen){
        Aschar = input[0];
        Asint = static_cast<int>(input[0]);
            return true;
    }
    return (false);
}

bool   typeRecognizer::IsDigitInSize(std::string& input, int start, int end)
{
    if (start == end)
        return (0);
    if (input[start] == '-' || input[start] == '+')
        start++;
    while(input[start] && start < end)
    {
        if (!isdigit(input[start]))
            return (0);
        start++;
    }
    return (1);
}

int RadixPoint(std::string &input)
{
    int i(-1);

    while (input[++i])
        if (input[i] == '.')
            return (i);
    return (-1);
}

bool Grammar(std::string &input, char type)
{
    if (type == 'F'){
        return (input[input.length() - 1] == 'f' && 
                input.length() >= 4 &&
                RadixPoint(input) != -1);
    }
    
    if (type == 'D'){
        return (input.length() >= 3 &&
             RadixPoint(input) != -1);
    }
    return (0);
}

bool   typeRecognizer::typeISfloat(std::string& input)
{
    if (Grammar(input, 'F'))
        if (IsDigitInSize(input, 0, input.find_first_of(".")) &&
            IsDigitInSize(input, input.find_first_of(".") + 1, input.length() - 1)){
            Asfloat = (strtod(input.c_str(), NULL));
                    return (true);}
    return (false);

}

bool   typeRecognizer::typeISdouble(std::string &input)
{
    if (Grammar(input, 'D')){
        if (IsDigitInSize(input, 0, input.find_first_of(".")) &&
            IsDigitInSize(input, input.find_first_of(".") + 1, input.length())){
            Asdouble = (strtod(input.c_str(), NULL));
                    return (true);}
    }
    return (false);

}

int    typeRecognizer::ToInt (std::string &input)
{
    std::stringstream(input) >> Asint;
    return (Asint);
}

void     typeRecognizer::typeFinder(std::string &input)
{
    inputLen = input.length();
    if (typeISint(input)){
        DataType = INT;
        return;
    } else if (typeISchar(input)){
        DataType = CHAR;
        return;
    } else if (typeISfloat(input)){
        DataType = FLOAT;
        return;
    } else if (typeISdouble(input)){
        DataType = DOUBLE;
        return ;
    }
    DataType = UNDEFINED;
    return ;
}
