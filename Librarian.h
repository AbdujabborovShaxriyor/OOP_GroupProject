#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "Member.h"
#include "Book.h"
#include <algorithm> // for remove_if

class Librarian {
public:
    int librarian_id;
    string name;
    string password;

    // Methods
    void add_book(Book& book, vector<Book>& library_books) {
        library_books.push_back(book);
        cout << "Book '" << book.title << "' added to the library." << endl;
    }

    void remove_book(Book& book,vector<Book>& library_books) {
        library_books.erase(remove(library_books.begin(), library_books.end(), book), library_books.end());
        cout << "Book '" << book.title << "' removed from the library." << endl;
    }

    void view_all_books( vector<Book>& library_books) {
        for ( auto& book : library_books) {
            book.display_info();
        }
    }
};

#endif // LIBRARIAN_H