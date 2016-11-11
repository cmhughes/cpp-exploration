/*  simpleArithmetic.cpp
 *
 *  a program that does some very simple arithmetic;
 *  the idea is to experiment with operators, rounding, printing, etc
 *
 *  Author: cmhughes
 *  Date:   November 11th, 2016
 *
 */
#include <iostream>
#include <cmath>            // for pow, and other mathematical operators/functions
#include <iomanip>          // for setprecision, see http://stackoverflow.com/questions/12453557/setprecision-is-not-a-member-of-std
#define _USE_MATH_DEFINES   // for mathematical constants, such as pi

/* variable declarations */
int sideOfSquare;
int baseOfTriangle;
int heightOfTriangle;
int radiusOfCircle;

int main() {

    /* square */
    sideOfSquare = 12;
    std::cout << "The square has side " << sideOfSquare << " and its area is "<< pow(sideOfSquare,2)<<" (units square).\n\n";

    /* triangle */
    baseOfTriangle = 10;
    heightOfTriangle = 4;
    std::cout << "The triangle has base " << baseOfTriangle << " and height " <<heightOfTriangle <<". So, its area is "<< .5*baseOfTriangle*heightOfTriangle<<" (units square).\n\n";

    /* circle */
    radiusOfCircle = 2;
    std::cout << "The radius of the circle is " << radiusOfCircle << " So, its area is "<< M_PI * pow(radiusOfCircle,2) << " (units square)\n\n";

    /* precision/rounding examples*/
    std::cout<< "We can set precision using std::setprecision (15), for example: " << std::setprecision (15)<< M_PI << std::endl;
    std::cout<< "We can round/floor/ceil/trunc numbers, for example: \n";
    std::cout<< "original: " << M_PI << "\n";
    std::cout<< "round(M_PI): " << round(M_PI) << "\n";
    std::cout<< "floor(M_PI): " << floor(M_PI) << "\n";
    std::cout<< "ceil(M_PI): " << ceil(M_PI) << "\n";
    std::cout<< "trunc(M_PI*100)/100: " << trunc(M_PI*100)/100 << " (truncates to 2 d.p)\n";
    std::cout<< "trunc(M_PI*1000)/1000: " << trunc(M_PI*1000)/1000 << " (truncates to 3 d.p)\n";

    /* some trigonometric calculations */
    std::cout << "When t is pi/4 (" << M_PI/4 << ") cos(t) is :" << cos(M_PI/4) << ".\n";
    std::cout << "When t is pi/4 (" << M_PI/4 << ") sin(t) is :" << sin(M_PI/4) << ".\n";
    std::cout << "When t is pi/3 (" << M_PI/3 << ") cos(t) is :" << cos(M_PI/3) << ".\n";
    std::cout << "When t is pi/3 (" << M_PI/3 << ") sin(t) is :" << sin(M_PI/3) << ".\n";

    return (0);
}
