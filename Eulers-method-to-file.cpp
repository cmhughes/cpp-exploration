/*  EulersMethod.cpp
 *
 *  A simple implementation of Euler's method 
 *  to find a numerical solution to a
 *  first order ODE that has the form
 *
 *      dy/dx = f(x,y), y(a) = y0
 *
 *  on the interval [a,b].
 *
 *  We start at y0, and then use
 *
 *      y[n] = y[n-1] + h f(x[n-1],y[n-1])
 *
 *  where h is the stepsize. 
 *
 *  Author: cmhughes
 *  Date:   November 11th, 2016
 *
 *  Reference: pgs 126 -- 127 of Practical C++ programming
 *
 */
#include <iostream>
#include <fstream>

int main() {
    /* declare the right hand side function */
    double f(double x, double y);

    /* specify the interval [a,b] */
    double a = 1;
    double b = 4;

    /* and the initial value y0 and h */
    double y0 = 1;
    double h = 0.1;

    /* x and y will be updated in the following loop */
    double x=a;
    double y=y0;

    /* create a file handle for the output */
    std::ofstream out_file("euler.dat");

    /* heading in the output file */
    out_file << "# This file is called euler.dat\n";
    out_file << "# and was created by Eulers-method-to-file.cpp\n";
    out_file << "# Do not edit directly! Edit using Eulers-method-to-file.cpp\n";
    out_file << "# x\ty\n";

    /* this loop implements the algorithm, and outputs to file */
    while(x<=b){

        // y[n] = y[n-1] + h*f(x[n-1],y[n-1])
        y += h*f(x,y);
        
        // add h to x
        x += h;

        // output to file, see pg 250 of Practical C++ Programming
        out_file << x << "\t" << y << "\n";
    }

    /* output to screen */
    return (0);
}

/*  f : provides the value of the right hand side function f(x,y)
 *        in the differential equation
 *
 *              dy/dx = f(x,y)
 *
 *  Parameters (inputs):
 *      x (double precision)
 *      y (double precision)
 *
 *  Returns (output):
 *      f(x,y): function evaluated at (x,y)
 *
 *  Sample use:
 *      f(42, 5)
 */
double f(double x, double y){

    // the right hand side function can be any function of x or y
    return (2*y-1);
}
