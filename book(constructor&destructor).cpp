#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int publicationYear;
public:
    Book(const string &bookTitle, const string &bookAuthor, int pubYear) {
        title = bookTitle;
        author = bookAuthor;
        publicationYear = pubYear;
        cout << "Book created: \"" << title << "\" by " << author << ", published in " << publicationYear << endl;
    }
    ~Book() {
        cout << "Book destroyed: \"" << title << "\" by " << author << endl;
    }
    void displayDetails() const {
        cout << "Title: \"" << title << "\"" << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
    void updatePublicationYear(int newYear) {
        publicationYear = newYear;
        cout << "Publication year updated to " << publicationYear << endl;
    }
};
int main() {
    Book myBook("1984", "George Orwell", 1949);
    myBook.displayDetails();
    myBook.updatePublicationYear(1950);
    return 0;
}