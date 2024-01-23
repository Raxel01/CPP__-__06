#include "Serializer.hpp"

int main ()
{
    Data *Todata;
    try
    {
        Todata = new Data(150, 'c');
        std::cout << "Todata addr : " << Todata << std::endl;
        std::cout << "Ser/Deser " << Serializer::deserialize( Serializer::serialize(Todata)) << std::endl;
    // {
    // uintptr_t a = reinterpret_cast<uintptr_t>(Todata);
    // std::cout << "Todata address : " << Todata << std::endl;
    // float b = 10.01;
    // int a = reinterpret_cast<int>(b);

    // // Todata = reinterpret_cast <Data*> (a);
    // Data *adddata = reinterpret_cast <Data*> (a);
    // std::cout <<"Todata : " << adddata << "  |->"<< a <<" a Size : " << sizeof(a) << std::endl;
    // }
        Data *NewPtr = Serializer::deserialize( Serializer::serialize(Todata));
        if (NewPtr == Todata){
            std::cout << "Yes Same address : " << NewPtr << " Todata : "<< Todata << std::endl;
            NewPtr->getAttr();
        }
        delete Todata;
    }
    catch (Data::NonValidPointer& e){
        delete Todata;
        // std::cout << a << std::endl;
        std::cout << "Error Occured due to Reason : "<< e.what()<< std::endl;
    }
    return (0);
}