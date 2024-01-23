/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:50:13 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/22 22:44:29 by abait-ta         ###   ########.fr       */
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
    char *b = new char[8];

    // int *c = static_cast <int*>(b);
    
    int *e = reinterpret_cast <int*>(b);
    
    printf("addr : %p\n", e);
    
    uintptr_t a = 20;
    
    return (0);
}