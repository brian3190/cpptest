#include <iostream>
#include <typeinfo>

#define PRINT_NAME(x) std::cout << #x << " - " << typeid(x).name() << '\n' //macro

int main()
{
    PRINT_NAME(char);           //char - c
    PRINT_NAME(signed char);    //signed char - a
    PRINT_NAME(unsigned char);  //unsigned char - h
    PRINT_NAME(short);          //short - s
    PRINT_NAME(unsigned short); //unsigned short - t
    PRINT_NAME(int);            //int - i
    PRINT_NAME(unsigned int);   //unsigned int - j
    PRINT_NAME(long);           //long - l
    PRINT_NAME(unsigned long);  //unsigned long - m
    PRINT_NAME(float);          //float - f
    PRINT_NAME(double);         //double - d
    PRINT_NAME(long double);    //long double - e
    PRINT_NAME(char*);          //char* - Pc
    PRINT_NAME(const char*);    //const char* - PKc
}
