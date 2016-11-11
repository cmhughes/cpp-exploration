/*  areaOfTriangleUsingFunction.cpp
 *
 *  a program that contains functions to be evaluated
 *
 *  Author: cmhughes
 *  Date:   November 11th, 2016
 *
 *  Reference: pgs 126 -- 127 of Practical C++ programming
 *
 */
#include <iostream>
#include <cassert>  // for the assert function to check variables, etc
int main() {
    /* declare the triangle function */
    double triangle(double width, double height);

    /* start the fun */
    double width = 3.45;
    double height = 5.80;

    /* output to screen */
    std::cout << "Width of triangle: " << width << ", with height: " << height << ", has area: " << triangle(width,height) << " (units square)\n";
    return (0);
}

/*  triangle -- computer the area of a triangle 
 *
 *  Parameters (inputs):
 *      width: width of triangle (double precision)
 *      height: height of triangle (double precision)
 *
 *  Returns (output):
 *      area: area of the triangle (double precision)
 *
 *  Sample use:
 *      triangle(42, 5)
 */
double triangle(double width, double height){

    // check the input variables
    assert(width > 0.0);
    assert(height > 0.0);

    // if we get to this point, we can compute the area
    double area = .5*width*height;
    return (area);
}
