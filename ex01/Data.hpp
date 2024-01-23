/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:36:57 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/23 11:44:13 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <iomanip>

class Data
{
    private :
        short stock;
        char  Admin;
    public :
        Data();
        Data(short AssStock, char AssAdmin);
        class NonValidPointer : public std::exception
        {
          public :
                 const char* what() const throw();      
        };
        Data(const Data &Obj);
        void getAttr();
        Data& operator=(const Data &Origine);
        ~Data();
};

#endif