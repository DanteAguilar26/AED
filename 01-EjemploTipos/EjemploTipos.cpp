#include <cassert>
#include <cstring>
//#include <iostream>
//#include <iomanip>
#include <string>

using namespace std::literals;

int main()
{
    //Prueba de tipo de dato int
    assert(2 == 1+1); 
    assert(10 == 5+5);
    assert(10 == 2 * 2 * 2 + 2);
    assert(100 > 99);
    assert(95 + 3 < 100);
    assert(100 != 10 * 100);
    assert(-1 < 0);
    assert(-5 -5 < -8);
    assert(-6 + 3 == -2 - 1);
    assert(-5 == 15 / -3 );                     
    assert(1 == 11 % 2 ); 

    //Prueba de tipo de dato bool
    assert(true);
    assert(false == false);
    assert(true != false);
    assert(not false);
    assert(not false == true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false == false);
    assert((false or true) and false == false);
    assert(false != (5+5.0==10));    

    //Prueba de tipo de dato double
    assert(0.0 - 1.0 == -1.0);
    assert(2.0 == 1.0 + 1.0);
    assert(0.1 == 1.0/10.0);
    assert(1 == 1.0);
    assert(2.0 == 1 + 1.0);
    assert(2 == 1 + 1.0);
    assert(170.1 <= 199.78);        
    assert(13.5 >= 6.7);            
    assert(4.5 == 1.5 * 3.0 ); 
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';

    //Prueba de tipo de dato strings
    assert("aguilar"s == "agui"s + "lar"s);
    assert("aguilar"s.length() == 7); //length("aguilar")
    assert("aguilar"s.length() > 0);
    assert("AA"s < "AB"s);
    assert("AA"s < "aa"s);
    assert("hola"s == "hola"s);
    assert("hola" == "hola"); //puede fallar!

{
    {
        char s [] = "hola";
        char t [] = "hola";
        assert(s != t);
        assert(0 == strcmp(s,t));

        //s = "chau";
        //assert(s == "chau");
    }

    {
        std::string s {"hola"s};
        std::string t {"hola"s};
        assert(s == t);

        s = "chau";
        assert(s == "chau");
    }
}

    //Prueba de tipo de dato char
    assert('A' == 65);
    assert('B' == 'A' + 1);
    assert(1 == 'B' - 'A');
    assert('A' != 'a');
    assert('A' + 'B' == 131);
    assert('D'+'a'+'n'+'t'+'e' == 492);
    assert('B' != 68);
    assert('4' != '2' + '3');
    assert('a' - 32 == 'A');

    //Prueba de tipo de dato unsigned //Numeros Naturales
    //se usa la u para unsigned
    assert(2u == 1u + 1u);
    assert(10u == 5u + 5u);
    assert(10u == 2u * 2u * 2u + 2u);
    assert(100u > 99u);
    assert(95u + 3u < 100u);
    assert(100u != 10u * 100u);
    assert(0u==0u);
    assert(0u==15u%3u);
    assert(5u==3u+2u);
    assert(9999999999u == 9999999998u + 1u);
    assert(1400u <= 1500u);
    assert(8000u >= 1000u);

    /*
   cout << "char : " << sizeof(char) << endl;
   cout << "int : " << sizeof(int) << endl;
   cout << "short int : " << sizeof(short int) << endl;
   cout << "long int : " << sizeof(long int) << endl;
   cout << "float : " << sizeof(float) << endl;
   cout << "double : " << sizeof(double) << endl;
   */
   
}