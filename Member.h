#ifndef MEMBER_H
#define MEMBER_H

using namespace std;
#include <iostream>
#include <vector>
#include "Book.h"

class Member {
public:
    int member_id;
    string name;
    string email;
    vector<Book> borrowed_books;

    void borrow_book(Book& book) {
        if (book.is_available) {
            book.mark_as_borrowed();
            borrowed_books.push_back(book);
            cout << "Book '" << book.title << "' borrowed by " << name << endl;
        } else {
            cout << "Book '" << book.title << "' is not available." << endl;
        }
    }

    void view_borrowed_books() {
        for (const auto& book : borrowed_books) {
            cout << "Borrowed Book: " << book.title << endl;
        }
    }
};

#endif //MEMBER_H
