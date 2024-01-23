/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:36:52 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 18:54:11 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void    Data::getAttr()
{
    std::cout << "Admin first name : " << this->Admin <<  std::endl;
    std::cout << "Stock : " << this->stock << std::endl;
}


Data::Data()
{
    // std::cout << "#" << std::setw(46) << "Data Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

Data::Data(const Data &Obj)
{
    // std::cout << "#" << std::setw(43) << "Data Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    *this = Obj;
}

Data::~Data()
{
    // std::cout << "#" << std::setw(40) << "Data  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

Data::Data(short AssStock, char AssAdmin) : stock(AssStock), Admin(AssAdmin)
{
    // std::cout << "#" << std::setw(40) << "Data  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

const char* Data::NonValidPointer::what() const throw(){
    return ("Non Valid Pointer : (NULL POINTER DETECTED)");
}

Data & Data::operator=(const Data &Origine)
{
    //  std::cout << "#" << std::setw(51) << "Data Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     if (this != &Origine)
     {
        this->stock = Origine.stock;
        this->Admin = Origine.Admin;
     }
     return (*this);
}
