#pragma once

#include <iostream>
#include <string>
#include "IteratorSLL.hpp"

/**
 * @brief CMP 246 Module 4 class representing a book.
 * 
 * This class represents a book that might be found on an online bookseller's
 * site. It encapsulates the book's title and a variety of keywords for the
 * book.
 */
class Book {
public:
    /**
     * @brief Initializing constructor.
     * 
     * This constructor creates a new book object based on fields in the 
     * parameter.
     * 
     * @param dataLine comma-separated string containing the data for this 
     * book. The first field is the book title. The rest of the fields are
     * zero or more keywords describing the book.
     */
    Book(std::string dataLine);

    /**
     * @brief Title accessor.
     * 
     * @return String containing this book's title.
     */
    std::string getTitle() { return title; }

    /**
     * @brief See if a keyword matches this book.
     * 
     * Search this book's list of keywords for the parameter keyword. Keywords
     * are case sensitive and must match an item from the list exactly to 
     * count. 
     * 
     * @param keyword Keyword to search for. 
     * 
     * @return true if the parameter is in this book's keyword list, false 
     * otherwise.
     */
    bool keywordMatch(std::string keyword) const;

    /**
     * @brief Stream insertion operator.
     * 
     * Override stream insertion to work with book objects. 
     * 
     * @param out Reference to the ostream to write to.
     * 
     * @param book Reference to the book to output.
     * 
     * @return Reference to the parameter ostream.
     */
    friend std::ostream &operator<<(std::ostream &out, const Book &book); 

private:
    /** String holding the book's title. */
    std::string title;

    /** List of string keywords describing the book. */
    IteratorSLL<std::string> keywords;
};