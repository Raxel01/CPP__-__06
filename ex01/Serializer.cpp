/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:13:50 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 11:48:02 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "#" << std::setw(46) << "Serializer Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

Serializer::Serializer(const Serializer &Obj)
{
    std::cout << "#" << std::setw(43) << "Serializer Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    *this = Obj;
}

Serializer::~Serializer()
{
    std::cout << "#" << std::setw(40) << "Serializer  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

Serializer & Serializer::operator=(const Serializer &Origine)
{
    std::cout << "#" << std::setw(51) << "Serializer Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
    (void)Origine;
    return (*this);
}


uintptr_t  Serializer::serialize(Data* ptr){
    
    if (ptr == NULL)
        throw Data::NonValidPointer();
    return (reinterpret_cast<uintptr_t>(ptr)); 
}

Data* Serializer::deserialize(uintptr_t raw){
    
    return (reinterpret_cast <Data*> (raw));
}

