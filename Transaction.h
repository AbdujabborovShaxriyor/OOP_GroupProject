#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
using namespace std;

class Transaction {
public:
    int transaction_id;
    string book_title;
    string member_name;
    string date_issued;
    string date_due;
    string date_returned;


    Transaction()
        : transaction_id(0), book_title(""), member_name(""),
          date_issued(""), date_due(""), date_returned("") {}


    Transaction(int id, const string& book, const string& member,
                const string& issued, const string& due, const string& returned = "")
        : transaction_id(id), book_title(book), member_name(member),
          date_issued(issued), date_due(due), date_returned(returned) {}


    void record_issue() const {
        cout << "Transaction ID: " << transaction_id << endl;
        cout << "Book: '" << book_title << "' issued to " << member_name << endl;
        cout << "Date Issued: " << date_issued << endl;
        cout << "Due Date: " << date_due << endl;
    }

    void record_return() const {
        cout << "Transaction ID: " << transaction_id << endl;
        cout << "Book: '" << book_title << "' returned by " << member_name << endl;
        cout << "Date Returned: " << date_returned << endl;
    }

};

#endif // TRANSACTION_H

