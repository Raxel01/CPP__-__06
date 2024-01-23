#include <iostream>

class Stackunwind
{
    char *elem;
    public :
        Stackunwind(){
            elem = new char[9];
            strcpy(elem, "Abdelali");
            std::cout << elem << std::endl;
        }
        ~Stackunwind(){
            delete elem ;
            std::cout << " Destructor Called " << std::endl;
}

};

void leaks()
{
    system("leaks a.out");
}

void f(){

    Stackunwind stacker;
    throw 1/0;

}

int main ()
{
    atexit(leaks);
try
{
    f();
}
catch(...)
{
    std::cerr <<"Error ..." << std::endl;
}

    return (0);
}