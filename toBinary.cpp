/* 
 * File:   toBinary.cpp
 * Author: jjones
 *
 * Created on September 14, 2018, 4:18 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>

using std::string;
using namespace std;

string toBinary(int decimal, string binary = "");

int main(int argc, char** argv) {
    int decimal;

    cout << "Please enter a number you wish to translate to binary: ";
    cin >> decimal;

    cout << toBinary(decimal) << endl; 

    return 0;
};

string toBinary(int decimal, string binary){
    if (decimal < 1) {
        return binary;
    }

    return toBinary(decimal/2, std::to_string(decimal%2) + binary);
};