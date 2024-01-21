/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:50:13 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/20 14:42:14 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
    switch (ac)
    {
        case 2:
            ScalarConverter::convert(av[1]);
            break;
        default:
            std::cout << std::setw(38) <<"|__Non Acceptable Syntax__|" << std::endl;
            std::cout << std::setw(34) <<"-----------------------------" << "---------"<<std::endl;
            std::cout << std::setw(34) <<"|  USE THIS SYNTAX  ./Scalar " << " av[1] -|"<<std::endl;
            break;
    }
    return (0);
}