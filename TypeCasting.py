/***************************************************/
/*/*-------*/        TYPE_CASTING                  */
/***************************************************/

Diff (What'is', typeCasting){
    Is : the process of converting a data type to another data type in a programme;
}

Why (Use, TypeCasting){
    According to our program;
    What the Programmer like to do with Casting some times we try to : 
        check if two types pointers are the same : Dynamic Cast;
    -Serialize or deserialize a type Data : as exemple us reinterpret Cast to 
    trnasform the Form from a pointer to an integer I mean Portable Form :
        N.B (this in teger should have the Same sixe of a pointer) [uintptr];
}

TYPEOFCAST (type){
    type Casting Have many form and many types depending on the programer ''choice'' : 
            IMPLICITE :
        |*-There is a standard type Casting that don't require' any cast()[operator].
    Called "impilicite Cast""" that Occure When a non expected variable take a type that don't' be suitable (convien)
    this type then the compiler make the Cast. exemple C++ {float b =0.965; int C = b;
            |*hERE THE impilicte Cast Occur!!!}
            As we see Here we lose Data When We print C we find : C = 0; (Where the .965 go ?? );
    
        |*-: EXPLICITE Cast  : Have two types :
            -functional : b = int (a);
            -C like cast notation b =  (int)a;
            -this Cast is enough with Most Fundamental Data;
            -Can be used in Classes and pointer : it's may look syntaticly correct But'
            -can Caue Run Time Error ();
            -Convert any pointer to any other pointer Type.
        
|*dynamic_cast <new_type> (expression)                           AA   
reinterpret_cast <new_type> (expression)                         AA   
static_cast <new_type> (expression)                              AA   
const_cast <new_type> (expression)                               AA   
            -                                                    AA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
    dynamic_cast             CC          static_cast       CC       reinterpret_cast     CC           ConstCast    AA
---------------------------- CC----------------------------CC----------------------------CC------------------------AA
*Can be used only with point-CC                            CC                            CC                        AA    
ers and reference to object  CC                            CC                            CC                        AA        
it ensure that the result    CC                            CC                            CC                        AA
of the type Conversion is a  CC                            CC                            CC                        AA
a Valid Complete object      CC                            CC                            CC                        AA
of the REQUESTED cLASS.      CC                            CC                            CC                        AA
*dynamic_cast is always      CC
successful when we cast      CC
a class to one of its base    
classe
--------------------------------------------------------------------------------------------------------------------------------
|*- DYNAMIC_CAST : [-RUNTIME-]this Cast require RTTI to keep track of the Dynamic types.
    *- Can cast also any type pointer to a (void *);

:::::::::::::::::|STATIC_CAST| Compile Time ::::::::::::::::::::
upt to the programer to check if thecast is safe so if there is a data that will be LOSE it will not care about it ();;
3ella 3eks reinterpret_cast ghaysignaler error in case :{
    testCasting.cpp:30:9: error: cast from pointer to smaller type 'int' loses information
        y = reinterpret_cast<int>(locl);
cOP
}

|------------------- REINTERPRET_CAST : [COMPILE_TIME]*---------------------|
CONVERT aNY POINTER TO ANY oTHER pointers type the result is a simple binary
    copy of the Value From one pointer to another 
    |*-: ALL pointers Convertion is allowed:
    it Cas also Cast a pointers to an integer Type A condtion que le int a le meme size dyal pointer so Here we can use type
        uintptr_t (8 bytes ) and this int Guarante the back convertion to a pointer : 


}