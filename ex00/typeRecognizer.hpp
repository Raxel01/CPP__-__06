/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeRecognizer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:02:44 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/21 22:45:13 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_REC_HPP
#define TYPE_REC_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

enum WhichType
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    UNDEFINED,
};

#define DONT_EXIST 404

class typeRecognizer
{
    private:
        char   Aschar;
        int    Asint;
        float  Asfloat;
        double Asdouble;
    public :
        enum   WhichType DataType;
        int inputLen;
        class nonDisplayable : public std::exception
        {
             public :
                 const char* what() const throw();
        };
        class Impossible : public std::exception
        {
             public :
                const char* what() const throw();
         };
        typeRecognizer();
        typeRecognizer(std::string& input);
        typeRecognizer(const typeRecognizer &Obj);
        typeRecognizer& operator=(const typeRecognizer &Origine);
        void   typeFinder(std::string& input);
        bool   typeISchar   (std::string& input); 
        bool   typeISint    (std::string& input);
        bool   typeISfloat  (std::string& input); 
        bool   typeISdouble (std::string& input);
        bool   IsDigitInSize(std::string& input, int start, int end);
        void   ToCharr(std::string& input);
        int    ToInt (std::string&  input);
        // float  ToFloat(std::string input);
        // double ToDouble(std::string input);
        ~typeRecognizer();
};

#endif
    
