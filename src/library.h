#include "book.h"

class Library
{
public:
    Library();
    ~Library();
    void Give_book(Book book, int index);
    Book Get_book(int index);

    void Set_books(Book* books);

    Book find_by_name(const char* name, int BOOKS_COUNTER);
    Book find_by_genre(const char* genre, int BOOKS_COUNTER);
    Book find_by_author(const char* author, int BOOKS_COUNTER);


    Book* books;


    void Print();
private:
    //Book* books;
};

