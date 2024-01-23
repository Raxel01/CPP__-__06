#include <iostream>
#include "./ex01/Data.hpp"
// int main (){
//     
//     // Widening  conversion :  small be cast to big (cast int to long);;
//     // Narrowing conversion : l3eks long->int;;  
//     int a = 5;
//     float C = 0.5;
//     int r = C;
//     float l = r;
//     int e = (int)C;
//     int b = int(C);


//     return (0);
// }
//Explicite agree with casting type to another Type pointer heta
// walaw they are not Compatible

// class type-casting

#include <iostream>

using namespace std;
class tot 
{
    public :
        virtual void ananas(){};
};

class CDummy : public tot  {
float i,j;
public :
        virtual void ananas(){};
};

class CAddition {
int x,y;
public:
void funcc (int a, int b) { x=a; y=b; }
int result() { return x+y;}
};
// class CBase { public :
//     virtual void lol(){}
//     };
// class CDerived: public CBase {public :
//     virtual void lol(){} };

class CBase {public :
    virtual void l(){}};
class CDerived: public CBase {public :
    virtual void l(){}};

int main () {

srand(time(0));
int Number = rand();
if (Number % 2 == 0)
    std::cout << "2" << std::endl;
else if (Number % 1 == 0)
    std::cout << "1" << std::endl;
if (Number % 3 == 0)
    std::cout << "3" << std::endl;
// std::cout <<  Number <<std::endl;
// int  * a = new int[999];

// uintptr_t b = reinterpret_cast<uintptr_t>(a);

// std::cout << b <<std::endl;
    // int *type1 = new int[999];
    // void *type2 = static_cast<char *>(type1);
    // float ko = 5.4;
    // int *ptr =NULL;
    // CDummy  *ptr1 = new CDummy();
    // CAddition *ptr = dynamic_cast< CAddition*>(ptr1);
    // std::cout << ptr << std::endl;

    // int ki = dynamic_cast<int>(ko);
//     CBase b; CBase* pb;
// CDerived d; CDerived* pd;
// pb = dynamic_cast<CBase*>(&d); // ok: derived-to-base
// pd = dynamic_cast<CDerived*>(&b);
// std::cout << pb << " " << pd<< std::endl;
// CDummy dd;
// CAddition * padd;
// padd = dynamic_cast<CAddition*> (&dd); // they are not Compatible >>>...
// std::cout << padd <<std::endl;
// padd->funcc(7, 7);
// cout << padd->result();
return 0;
}