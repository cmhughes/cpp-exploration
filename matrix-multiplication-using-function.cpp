/*  matrix-multiplication-using-function.cpp
 *
 *  a program that passes a matrix to a function
 *
 *  Author: cmhughes
 *  Date:   November 18th, 2016
 *
 *  Output: loop through an array
 *
 *  reference: http://www.cplusplus.com/forum/beginner/73432/
 *
 */

#include <iostream>
#include <cassert>

using namespace std;

void matrix_multiplication(int *matrix_a, int number_rows_in_matrix_a, int number_columns_in_matrix_a,
                           int *matrix_b, int number_rows_in_matrix_b, int number_columns_in_matrix_b) {

    // the program will exit if dimensions don't agree
    assert(number_columns_in_matrix_a == number_rows_in_matrix_b);

    cout << "matrix a: "<<"\n";
    // put the matrix_a back together
    int rearranged_matrix_a[number_rows_in_matrix_a][number_columns_in_matrix_a];
    for (int i=0;i<number_rows_in_matrix_a;i++){
        for (int j=0;j<number_columns_in_matrix_a;j++){
            rearranged_matrix_a[i][j]=matrix_a[i*number_columns_in_matrix_a+j];
            cout<<rearranged_matrix_a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout << "matrix b: "<<"\n";
    // put the matrix_b back together
    int rearranged_matrix_b[number_rows_in_matrix_b][number_columns_in_matrix_b];
    for (int i=0;i<number_rows_in_matrix_b;i++){
        for (int j=0;j<number_columns_in_matrix_b;j++){
            rearranged_matrix_b[i][j]=matrix_b[i*number_columns_in_matrix_b+j];
            cout<<rearranged_matrix_b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // the product will be stored in c
    int matrix_c[number_rows_in_matrix_a][number_columns_in_matrix_b];

    cout << "their product: "<<"\n";
    // initialise the matrix_c to 0
    for (int i=0; i<number_rows_in_matrix_a; i++ ){
        for (int j=0; j<number_columns_in_matrix_b; j++ ){
             matrix_c[i][j] = 0;
        }
    }

    // loop back through and perform matrix multiplication
    for (int i=0; i<number_rows_in_matrix_a; i++ ){
        for (int j=0; j<number_columns_in_matrix_b; j++ ){
             for(int k=0; k<number_columns_in_matrix_a; k++){
                matrix_c[i][j] += rearranged_matrix_a[i][k]*rearranged_matrix_b[k][j];
             }
             std::cout << matrix_c[i][j] << "  ";
        }
        std::cout<< "\n";
    }
}

int main()
{
    // define the matrix_a
    int matrix_a[2][3] = {
                           {2,4,8},
                           {20,40,80},
                         };
    // columns and rows
    int number_of_columns_in_a = sizeof(matrix_a[0])/sizeof(matrix_a[0][0]);
    int number_of_rows_in_a = sizeof(matrix_a)/sizeof(matrix_a[0]);

    // define the matrix_b
    int matrix_b[3][5] = {
                                   {2,4,8,16,32},
                                   {20,40,80,160,320},
                                   {21,41,81,161,321}
                                   };
    // columns and rows
    int number_of_columns_in_b = sizeof(matrix_b[0])/sizeof(matrix_b[0][0]);
    int number_of_rows_in_b = sizeof(matrix_b)/sizeof(matrix_b[0]);

    // call the function
    matrix_multiplication((int *)matrix_a, number_of_rows_in_a, number_of_columns_in_a,(int *)matrix_b, number_of_rows_in_b, number_of_columns_in_b);
    return 0;
}
