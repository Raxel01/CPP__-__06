/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:45:39 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/24 17:40:29 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main ()
{
    Base *OBJ;
    try
    {
        Base obj;

        OBJ = generate();
        identify(OBJ);
        identify(*OBJ);
        delete OBJ;
    }
    catch (Base::SomethingWrong &e){
        delete OBJ;
        std::cout << e.what() << std::endl;  
    }
    return (0);
}