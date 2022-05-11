#include <cassert>
//#include <iostream>
//#include <iomanip>
#include <string>

using namespace std::literals;

int main()
{
    //Prueba de tipo de dato int
    assert(2==1+1);
    assert(10==5+5);
    assert(10==2*2*2+2);
    assert(100>99);
    assert(95+3<100);
    assert(100!=10*100);
    assert(-1<0);
    assert(-5-5<-8);
    assert(-6+3==-2-1);

    //Prueba de tipo de dato bool
    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);

    //Prueba de tipo de dato double
    assert(2.0==1.0+1.0);
    assert(0.1==1.0/10.0);
    assert(1==1.0);
    assert(2.0==1+1.0);
    assert(2==1+1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';

    //Prueba de tipo de dato strings
    assert("aguilar"s=="agui"s+"lar"s);
    assert("aguilar"s.length()==7); //length("aguilar")
    assert("aguilar"s.length()>0);

    //Prueba de tipo de dato char
    assert('A'==65);
    assert('A'+'B'==131);
    assert('D'+'a'+'n'+'t'+'e'==492);
    //assert(a !isdigit) // 'a'==97
    //assert('B'!=68);

    //Prueba de tipo de dato unsigned //Numeros Naturales
    assert(2==1+1);
    assert(10==5+5);
    assert(10==2*2*2+2);
    assert(100>99);
    assert(95+3<100);
    assert(100!=10*100);
}