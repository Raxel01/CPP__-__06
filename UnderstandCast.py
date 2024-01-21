#include <iostream>
/* ************************************************************************** */
/*                                                                            */
/*                  START UNDERSTANDING : -> TYPE CASTING IN C++              */
/*                                                                            */
/* ************************************************************************** */

/*
    @- Questions : I'll should be capable de repondre ces questions after studying this Concept : 
        - what is type casting       ?
        - Why We need it             ?
        - type of Casting            ?
        - How we do the type Casting ?
        - 
*/
Diff (TYPE_CASTING){
    Converting an expression of a given type into another type is known as type-casting ();

}
TYPES (type_cast){
    Implict Convertion :[STANDARD CONVERTION] no operator required ,
    a value of a type copier to a value of other type
    *- Exemple{} :
        {
            SHORT a = 2000;
            INT b;
            b = a;
        }
    *-DESADVENTAGE() : Some of these conversions may imply a loss of precision, which the
                        compiler can signal with a warning. This can be avoided with an 
                        explicit conversion.
    *-Exemple 2 : (Class oBjects);
                class A {};
                class B { public: B (A a) {} };
                A a;
                B b=a;                   
}

int main ()
{
    return (0);
}