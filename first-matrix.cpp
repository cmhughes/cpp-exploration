/*  first-matrix.cpp
 *
 *  a program that runs a few very simple
 *  experiments with arrays
 *
 *  Author: cmhughes
 *  Date:   November 18th, 2016
 *
 *  Output: loop through an array
 *
 */
#include <iostream>

// one-dimensional array
int one_dimensional_array[5] = {2,4,8,16,32};

// two-dimensional array, 3 rows by 5 columns
int two_dimensional_array[3][5] = {
                                   {2,4,8,16,32},
                                   {20,40,80,160,320},
                                   {21,41,81,161,321}
                                   };

int main() {
    // grab the size of the one-dimensional array
    int one_dimensional_array_dimenstion = sizeof(one_dimensional_array)/sizeof(one_dimensional_array[0]);

    // loop over the 1-d array
    for (int i=0; i<one_dimensional_array_dimenstion; i++ ){
        std::cout<< "i = " << i << "\n";
        std::cout<< "one_dimensional_array[" << i << "] = " << one_dimensional_array[i] << "\n";
    }

    // grab the size of the two-dimensional array
    int two_dimensional_rows = sizeof(two_dimensional_array)/sizeof(two_dimensional_array[0]);
    int two_dimensional_columns = sizeof(two_dimensional_array[0])/sizeof(two_dimensional_array[0][0]);
    std::cout << "rows: " << two_dimensional_rows << "\n";
    std::cout << "columns: " << two_dimensional_columns << "\n";

    // loop over the 2-d array
    for (int i=0; i<two_dimensional_rows; i++ ){
        for (int j=0; j<two_dimensional_columns; j++ ){
             std::cout<< "i = " << i << ", j = " << j << "\n";
             std::cout<< "two_dimensional_array[" << i << "][" << j << "] = " << two_dimensional_array[i][j] << "\n";
        }
        std::cout<< "===========New row!===========\n";
    }

    return (0);
}
