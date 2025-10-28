#include <iostream>
#include <string>
using namespace std;

// Base class: LibraryItem
class LibraryItem {
protected:
    string title;
    string author;
public:
    LibraryItem(string t, string a) : title(t), author(a) {}

    virtual void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

// Derived class: Book
class Book : public LibraryItem {
private:
    int pages;
public:
    Book(string t, string a, int p) : LibraryItem(t, a), pages(p) {}

    void displayDetails() override {
        LibraryItem::displayDetails();
        cout << "Pages: " << pages << endl;
    }
};

// Derived class: Magazine
class Magazine : public LibraryItem {
private:
    string publicationDate;
public:
    Magazine(string t, string a, string pd) : LibraryItem(t, a), publicationDate(pd) {}

    void displayDetails() override {
        LibraryItem::displayDetails();
        cout << "Publication Date: " << publicationDate << endl;
    }
};

int main() {
    Book book("The Alchemist", "Paulo Coelho", 250);
    Magazine magazine("Time Magazine", "Various Authors", "2022-01-01");

    cout << "Book Details:" << endl;
    book.displayDetails();

    cout << "\nMagazine Details:" << endl;
    magazine.displayDetails();

    return 0;
}
