#include <cstdlib>
#include <iostream>
#include <string>
#include "SLL.hpp"

/**
 * @brief CMP 246 Module 3 sample application.
 * 
 * This application uses the SLL class as a stack, in order to detect 
 * palindromes. The strategy is to push the first half of a string on to the
 * stack, then match the second half to values popped. If everything matches,
 * the string was a palindrome. If there is a mismatch, the string was not a 
 * palindrome.
 */
int main() {
    using namespace std;

    SLL<char> stack;
    string input;

    cout << "Enter a string (Q to quit): ";
    cin >> input;
    while(input != "Q") {
        unsigned halfLength = input.size() / 2;

        // push first half of string
        unsigned i = 0;
        for( ; i < halfLength; i++) {
            stack.add(input[i]);
        }

        // match with 2nd half
        bool isPal = true;

        // pick starting point
        if(halfLength * 2 != input.size()) {
            // odd length string; modify i to skip over middle character
            i++;
        } 

        for( ; i < input.size(); i++) {
            if(input[i] != stack.remove(0)) {
                isPal = false;
                break;
            }
        }

        // report results
        if(isPal) {
            cout << input << " is a palindrome!" << endl;
        } else {
            cout << input << " is NOT a palindrome!" << endl;
        }

        // get next value to check
        cout << "Enter a string (Q to quit): ";
        cin >> input;

    }

    return EXIT_SUCCESS;
}