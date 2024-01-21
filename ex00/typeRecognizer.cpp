/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeRecognizer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:50:45 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/21 19:12:10 by abait-ta         ###   ########.fr       */
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

typeRecognizer::typeRecognizer(std::string input)
{
    inputLen = input.length();
    //====================== char block===============>
    try{
        if (typeISchar(input))
            std::cout << "char : [" << input[0]<<"]"<<std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "char : [" << e.what() << "]" << std::endl;
    }
    
    //===================  int Block ==================>
    try{
        if (typeISint(input))
            std::cout << "int : [" << (int)ToInt(input)<< "]" <<std::endl;
        else if (inf_case(input))
            std::cout << "int : [" << input[0] << "inf" << "]" <<std::endl;
        else 
            throw Impossible();
    }
    catch (Impossible &ex){
        std::cout << "int : [" << ex.what() << "]" << std::endl;
    }
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


bool   typeRecognizer::typeISint(std::string input)
{
    int i (-1);
    while(input[++i])
        if (!std::isdigit(input[i]))
            return (0);
    return (1);
}

bool   typeRecognizer::typeISchar(std::string input)
{
    int Catcher;
    
    if (inputLen == 1 || !inputLen){
        if ((Catcher >= 32 && Catcher <= 127) \
            || (input[0] >= 32 && input[0] <= 127 )){
            if ((Catcher >= 32 && Catcher <= 127))
                Aschar = Catcher;
            else
            {
                Aschar = input[0];
                std::cout << Aschar <<std::endl;
            }
            return true;
        }
        else if (Catcher >= 0 && Catcher <= 31)
            throw nonDisplayable();
        else
            throw Impossible();
    }
    throw Impossible();
    return (false);
}

// bool   typeRecognizer::typeISfloat(std::string input)
// {

// }

// bool   typeRecognizer::typeISdouble(std::string input)
// {

// }

int    typeRecognizer::ToInt (std::string input)
{
    if (input[0] == '\0'){
        Asint = 0; return (Asint);
    }
    if (inputLen == 1)
        return (input[0] - 48);
    std::stringstream(input) >> Asint;
    return (Asint);
}

WhichType typeRecognizer::typeFinder(std::string input)
{
    if (typeISint(input))
        return (INT);
    else if (typeISchar(input))
        return (CHAR);
    return (UNDEFINED);
}
