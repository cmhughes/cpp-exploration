/*  hello.cpp
 *
 *  a program that prints, 'Hello world'
 *
 *  Author: C. M. Hughes
 *  Date:   November 11th, 2016
 *
 *  Output: Hello World
 *
 *  Compilation instructions:
 *
 *      g++ -g -Wall hello.cpp
 *
 *  This produces, by default
 *      
 *      a.out
 *
 *  which can be run with, for example,
 *
 *      ./a.out
 *
 *  Other options:
 *
 *      g++ -g -Wall hello.cpp -ohello
 *      g++ -g -Wall hello.cpp -o hello.out
 *
 *  Will call the program/executable hello or hello.out
 *
 *  References: pg 12 of Practical C++ programming
 *
 *  For Chris: using vim, 
 *      press f to run 
 *          g++ -g -Wall %
 *      press F to run 
 *          ./a.out
 *
 */
#include <iostream>
int main()
{
    std::cout << "Hello World\n";
    return (0);
}
