#include "iostream"
#include "string"
#include <vector>

using namespace std;


class Author {
private:
    string name;
    bool isAlive;
    int age;
public:
    Author(string name, bool isAlive, int age){
        this->name = name;
        this->isAlive = isAlive;
        this->age = age;
    }
    void get_info(){
        cout << "Name: " << name << ". Alive: " << (isAlive ? "Yes" : "No") << ". Age: " << age << endl;
    }
};

class Book {
private:
    string title;
    string manufacture_year;
    string genre;
    Author author;
    bool isBorrowed = false;
public:
    Book(string title, string manufacture_year, string genre, Author author)
       : title(title), manufacture_year(manufacture_year), genre(genre), author(author) {}
    void get_info(){
        cout << "Book Title: " << title << ". Manufacture Year: " << manufacture_year << ". Genre: " << genre << endl;
        cout << "About author: ";
        author.get_info();
    }
    bool getBorrowedStatus() const {
        return isBorrowed;
    }
    string getTitle() const {
        return title;
    }
    void setBorrowedStatus(bool status){
        isBorrowed = status;
    }
    void print() const {
        cout << "Title: " << title << ", Borrowed: " << (isBorrowed ? "Yes" : "No") << endl;
    }
};

class Library {
private:
    vector<Book> books;
public:
    void addBook(Book book){
        books.push_back(book);
    }
    void borrowBook(const string& title) {
        for (Book& book : books) {
            if (book.getTitle() == title && !book.getBorrowedStatus()) {
                book.setBorrowedStatus(true);
                return;
            }
        }
        cout << "Book not found or already borrowed." << endl;
    }

    void getBorrowedBookBack(const string& title) {
        for (Book& book : books) {
            if (book.getTitle() == title && book.getBorrowedStatus()) {
                book.setBorrowedStatus(false);
                return;
            }
        }
        cout << "Book not found or not borrowed." << endl;
    }

    void getBooksList() const {
        for (const auto& book : books) {
            book.print();
        }
    }
};

int main(){
    setlocale(LC_ALL, "RU");
    Author Ivan_Franko("Ivan Franko", false, 59);
    Book zahar("Захар Беркут", "1883", "Фикшн", Ivan_Franko);
    Book kamenyry("Каменярі", "1887", "Поэзия", Ivan_Franko);
    Book mykyta("Лис Микита", "1879", "Сказка", Ivan_Franko);
    Book borislav("Борислав сміється", "1887", "Драматургия", Ivan_Franko);
    Book ivan("Іван Вишенський", "1883", "Роман", Ivan_Franko);
    Book moysey("Мойсей", "1905", "Эпопея", Ivan_Franko);
   
    Library library;
    library.addBook(zahar);
    library.addBook(kamenyry);
    library.addBook(mykyta);
    library.addBook(borislav);
    library.addBook(ivan);
    library.addBook(moysey);
    
    library.getBooksList();
    library.borrowBook("Захар Беркут");
    library.getBooksList();
    
   
}
