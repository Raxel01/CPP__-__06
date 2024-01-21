/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:56:56 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/21 18:31:20 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "typeRecognizer.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "#" << std::setw(46) << "ScalarConverter Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &Obj)
{
    std::cout << "#" << std::setw(43) << "ScalarConverter Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    *this = Obj;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "#" << std::setw(40) << "ScalarConverter  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &Origine)
{
    (void)Origine;
     std::cout << "#" << std::setw(51) << "ScalarConverter Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     return (*this);
}

void    ScalarConverter::convert(std::string input)
{
    //Bezzaf DyalLhedraa Hennaya::
    typeRecognizer type(input);
}