#include "Book.h"

#include <iostream>
#include <sstream>
#include <string>

/*
 * Initializing constructor.
 */
Book::Book(std::string dataLine) {

    // convert the string parameter into a stream
    std::stringstream ss(dataLine);

    // parse using commas as the delimiter
    std::string token;

    // title first
    getline(ss, token, ',');
    title = token;

    // everything else is a keyword
    while(getline(ss, token, ',')) {
        // nuke extraneous CR if it exists
        if(int(token.back()) == 13) {
            token = token.substr(0, token.size() - 1);
        }
        keywords.add(token);
    }

}

/*
 * Implementation of the keyword matching method.
 */
bool Book::keywordMatch(std::string keyword) const {
    // move through the keyword list with iterators
    IteratorSLL<std::string>::Iterator i = keywords.front();
    for( ; i != keywords.end(); ++i) {
        if(*i == keyword) {
            return true;
        }
    }
    // if we get here, no match
    return false;
}

/*
 * Override of stream insertion operator.
 */
std::ostream &operator<<(std::ostream &out, const Book &book) {
    out << book.title;
    out << ": keywords = " << book.keywords;
    return out;
}
