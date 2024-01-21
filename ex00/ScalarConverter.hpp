/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:49:46 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/20 17:24:39 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALR_HPP
#define SCALR_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <sstream>

class ScalarConverter
{
    private:
        ScalarConverter();
    public :
    static void convert(std::string input);
    ScalarConverter(const ScalarConverter &Obj);
    ScalarConverter& operator=(const ScalarConverter &Origine);
    ~ScalarConverter();
    
};

#endif
    
