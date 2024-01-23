/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:32:54 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 11:39:11 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <iomanip>
#include "Data.hpp"

class Serializer
{
    private :
        Serializer();
    public :
        Serializer(const Serializer &Obj);
        Serializer& operator=(const Serializer &Origine);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};

#endif