/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:05:26 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 20:28:57 by abait-ta         ###   ########.fr       */
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
        Base * generate(void);
        class SomethingWrong : public std::exception{
            public :
                 const char* what() const throw();
        };
        
        void identify(Base* p);
        void identify(Base& p);
        virtual ~Base();
};

class A : public Base{

    
};
class B : public Base{

};

class C : public Base{

};

#endif