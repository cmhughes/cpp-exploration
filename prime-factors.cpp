/*  prime-factors.cpp
 *
 *  a program that outputs the prime factors of an inputted number
 *
 *  Author: cmhughes
 *  Date:   November 18th, 2016
 *
 *  Input: user is requested for a number, n; 
 *
 *  Output: the program gives prime factors of n
 *  
 *  reference: http://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/ 
 *  Algorithm
 *  1) While n is divisible by 2, print 2 and divide n by 2.
 *  2) After step 1, n must be odd. Now start a loop from i = 3 to square root of n. While i divides n, print i and divide n by i, increment i by 2 and continue.
 *  3) If n is a prime number and is greater than 2, then n will not become 1 by above two steps. So print n if it is greater than 2.
 *
 */
#include <iostream>
#include <cassert>
#include <cmath>

int main() {
    // declare the routines
    int is_prime(int integer_to_be_tested);

    // input from the user
    int integer_for_factorisation;

    // request user input, and validate
    std::cout << "Enter an integer to be factored into primes:\n";
    std::cin >> integer_for_factorisation;
    assert(integer_for_factorisation > 0);

    // if the given input is prime, then no need to go any further
    if(is_prime(integer_for_factorisation)){
        std::cout << "the integer you entered is prime, so the prime factorisation is:\n" << integer_for_factorisation << "*1\n";
        return (0);
    } else {
        std::cout << "the prime factors are:\n";

        // keep dividing by 2 until the quotient is not even
        while(integer_for_factorisation % 2 == 0 ) {
            integer_for_factorisation /= 2;
            std::cout << 2 << "\n";
        }

        // if the quotient is prime, then stop
        if(is_prime(integer_for_factorisation)){
            std::cout << integer_for_factorisation << "\n";
            return (0);
        }

        //  2) After step 1, n must be odd. Now start a loop from i = 3 to square 
        //  root of n. While i divides n, print i and divide n by i, increment i by 2 and continue.
        for(int i=3; i<=sqrt(integer_for_factorisation); i+=2){
            while( (integer_for_factorisation % i)==0 ){
                std::cout << i << "\n";
                integer_for_factorisation /= i;
            }
        }
        
        // if the quotient is prime, then stop
        if(is_prime(integer_for_factorisation)){
            std::cout << integer_for_factorisation << "\n";
            return (0);
        }
    }

    return (0);
}

// subroutine to test if a number is prime
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
