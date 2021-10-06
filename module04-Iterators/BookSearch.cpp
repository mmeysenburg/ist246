#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "Book.h"
#include "IteratorSLL.hpp"

/**
 * @brief CMP 246 Module 4 sample application.
 * 
 * This application creates a list of Book objects, then allows the user to 
 * search that list for titles that match a specified keyword.
 */
int main() {
    using namespace std;

    IteratorSLL<Book> bookList;
    ifstream inFile("books.csv");
    string line;

    // populate an IteratorSLL list with data from external CSV file
    while(getline(inFile, line)) {
        bookList.add(Book(line));
    }

    // prompt forr keywords and search the books
    cout << "Enter a keyword (Q to quit): ";
    getline(cin, line);     // <- needed to read whole line

    IteratorSLL<string> matchingTitles;
    while(line != "Q") {

        // accumulate matches
        IteratorSLL<Book>::Iterator i = bookList.front();
        for(; i != bookList.end(); ++i) {
            // note how we use ( ) to apply the method call to the Book object,
            // instead of the IteratorSLL<Book>::Iterator object
            if((*i).keywordMatch(line)) {
                matchingTitles.add((*i).getTitle());
            }
        }

        // output results
        if(matchingTitles.size() == 0) {
            cout << "----> No matching titles." << endl;
        } else {
            cout << "----> Matching titles:" << endl;
            IteratorSLL<string>::Iterator j = matchingTitles.front();
            for(; j != matchingTitles.end(); ++j) {
                cout << "          " << *j << endl;
            }
        }

        // next query
        cout << endl;
        cout << "Enter a keyword (Q to quit): ";
        getline(cin, line);

        matchingTitles.clear();
    }

    return EXIT_SUCCESS;
}