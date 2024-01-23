/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:45:39 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 19:37:21 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
void leaks(){
    system("leaks MyTypeinfo");

}
int main ()
{
    Base *OBJ;
    try
    {
        Base obj;

        OBJ = obj.generate();
        std::cout << "OBJ Addr : " << OBJ<< std::endl;
        obj.identify(OBJ);
        delete OBJ;
    }
    catch (Base::SomethingWrong &e){
        std::cout << e.what() << std::endl;  
    }
    return (0);
}