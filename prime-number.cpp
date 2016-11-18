/*  prime-number.cpp
 *
 *  a program that tests if a given integer is prime
 *
 *  Author: cmhughes
 *  Date:   November 18th, 2016
 *
 *  Input: user is requested for a number, n; 
 *
 *  Output: the program details all of the 
 *          integers <= n, tests them to see if they 
 *          are prime, and gives a 1/0 for prime/not prime respectively
 *  
 *  reference: https://en.wikipedia.org/wiki/Primality_test#Pseudocode
 *
 */
#include <iostream>
#include <cassert>
#include <cmath>

int main() {
    // declare the is_prime routine
    int is_prime(int integer_to_be_tested);
    int maximum_integer;
    int total_primes_in_range = 0;

    // request user input, and validate
    std::cout << "Enter a integer:\n";
    std::cin >> maximum_integer;
    assert(maximum_integer > 0);

    // loop through from 1 to maximum integer
    for(int i=1; i<=maximum_integer; i++){
        std::cout << "is " << i << " prime? " << is_prime(i) << "\n";
        is_prime(i) ? total_primes_in_range++ : 0;
    }

    std::cout << "Total number of prime numbers from 1 to " << maximum_integer << " is: " << total_primes_in_range;
    return (0);
}

int is_prime(int integer_to_be_tested){
    assert(integer_to_be_tested > 0);
    switch (integer_to_be_tested){
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        default:
            // if the integer is even, return immediately
            if(integer_to_be_tested % 2 == 0){
                return 0;
            }

            // otherwise, proceed with the alogorithm
            for(int i=2; i<=sqrt(integer_to_be_tested); i++){
                if( (integer_to_be_tested % i)==0 or (integer_to_be_tested % (i+2)) ==0 ){
                    return 0;
                }
            }
            return 1;
    }
}
