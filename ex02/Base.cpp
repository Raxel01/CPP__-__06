/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:27:20 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 20:29:47 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
    
}

Base::~Base()
{
    
}

const char* Base::SomethingWrong::what() const throw()
{
    return ("Something Goes Wrong....");
}

Base* Base::generate ( void ){

    int picked(0);
    int arr[] = {1, 2, 3};
    
    srand(time(NULL));
    picked = arr[rand() % 3];
    switch (picked)
    {
    case  1:
        return (new A());
        break;
     case 2:
        return (new B());
        break;
     case 3:
        return (new C());
        break;
    default:
        throw Base::SomethingWrong();
        break;
    }
    return (NULL);
}

void Base::identify(Base* p)
{
    
    if (p == NULL)
        throw Base::SomethingWrong();
    A *a = dynamic_cast<A*>(p);
    B *b=  dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    if (a)
        std::cout <<"The pointer Catched is For Type A"<< std::endl;
    else if (b)
        std::cout <<"The pointer Catched is For Type B"<< std::endl;
    else if (c)
        std::cout <<"The pointer Catched is For Type C"<< std::endl;
}

void Base::identify(Base& p){
    Base::identify(&p);
}

