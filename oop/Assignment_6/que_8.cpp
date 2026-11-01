
/* Q8. WAP to define a class BOOK having members
   title, author name, number of pages and price.
   Initialize the data members using constructors.
   Enter the details of a book and display them. */

#include <iostream>
using namespace std;

class BOOK {
    string title, author;
    int pages;
    float price;

public:
    BOOK(string t, string a, int p, float pr) {
        title = t;
        author = a;
        pages = p;
        price = pr;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    BOOK b("C++ Programming", "Bala", 300, 450);
    b.display();

    return 0;
}
