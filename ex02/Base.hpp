/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:05:26 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/24 14:00:36 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <iomanip>

class Base
{
    public :
        Base();
        class SomethingWrong : public std::exception{
            public :
                 const char* what() const throw();
        };
        
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

class A : public Base{

    
};
class B : public Base{

};

class C : public Base{

};

#endif