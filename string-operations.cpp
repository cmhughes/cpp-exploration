/*  stringOperations.cpp
 *
 *  a program that tests string operations, in particular
 *      - string matches (true / false / global)
 *      - string replacement/substitution
 *      - regular expressions; will have to return to regexs in C++
 *
 *  Author: cmhughes
 *  Date:   November 11th, 2016
 *
 */
#include <iostream>
#include <string>   // allows string variables and provides string methods

/* declare variables */
std::string first_name;
std::string last_name;
std::string full_name;

int main() {
    // task 1: separate strings
    first_name = "Chris";
    last_name = "Hughes";
    std::cout << "My name is " << first_name << " " << last_name << "\n";

    // task 2: adding strings
    full_name = first_name + " " + last_name;
    std::cout << "My full name is " << full_name << "\n";

    // task 3: substrings and string length
    int digitCount = 4;
    std::cout << "The first "<< digitCount << " three letters of my full name are: " << full_name.substr(0,digitCount) << "\n";
    std::cout << "The number of characters in my full name is: " << full_name.length()<< "\n";
    std::cout << "The last " << digitCount << " letters of my full name are: " << full_name.substr(full_name.length()-digitCount,full_name.length()) << "\n";

    // task 4: test some string matches
    std::string contained_within = "hes";
    std::cout << "Is '" << contained_within << "' the same as " << full_name << "? " << full_name.compare(contained_within) << "\n";
    std::cout << "Is '" << contained_within << "' contained within " << full_name << "? " << (full_name.find(contained_within) != std::string::npos) << "\n";
    std::cout << "Position of match of '" << contained_within << "' contained within " << full_name << "is " << full_name.find(contained_within) << "\n";

    // task 5: string replacement
    std::cout << "Replacing '" << contained_within << "' in " << full_name << " so that it now looks like: " << full_name.replace(full_name.find(contained_within),full_name.size(),"CMH replaced this") << "\n";
    return (0);
}
