#include <iostream>

class parent
{
    public :
    // int o;
    virtual ~parent(){};
};

class child : public parent
{


};

class lol
{
    public :
        // virtual ~lol(){};
};

int main ()
{
    
    float ff = 8.23;

    int y = static_cast<int> (ff);
    
    std::cout << y << std::endl;
    
    lol *locl = NULL;
    y = reinterpret_cast<int>(locl);

    child *lolc = NULL;

    locl = dynamic_cast<lol *>(lolc);
    std::cout << locl << std::endl;

    parent *parentp = new parent(); 
    
    parent obj;
    try{
        child &ref = dynamic_cast<child &>(*parentp);}
    catch(std::exception &ex){
        std::cout << ex.what()<< std::endl;
    }
    child  *secch = new child();
    
    parent *secpar = new  parent();

    *secpar  = dynamic_cast<parent &>(*secch);

    std::cout << secpar << std::endl;

    child  *childp = dynamic_cast<child *>(parentp);

    std::cout << childp<< std::endl;


    return (0);
}