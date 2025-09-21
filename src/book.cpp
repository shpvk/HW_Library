    #include "book.h"
    #include <cstring>
    Book::Book()
    {
        book_name = nullptr;
        book_genre = nullptr;
        book_author = nullptr;
        is_book_aviable = true;
    }


    Book::~Book()
    {
        delete[] book_name;
        delete[] book_genre;
        delete[] book_author;
        is_book_aviable = true;
    }




    void Book::Set_is_book_aviable(bool status)
    {
        is_book_aviable = status;
    }


    void Book::Init_book(const char* _book_name, const char* _book_genre, const char* _book_author)
    {
    if(book_name != nullptr)
    {
        delete[] book_name;
    }

    
    book_name = new char[strlen(_book_name) + 1];
    strcpy(book_name, _book_name);


    if(book_genre != nullptr)
    {
        delete[] book_genre;
    }
    
    book_genre = new char[strlen(_book_genre) + 1];
    strcpy(book_genre, _book_genre);




    if(book_author != nullptr)
    {
        delete[] book_author;
    }

    
    book_author = new char[strlen(_book_author) + 1];
    strcpy(book_author, _book_author);

    }









    void Book::Set_book_name(char* _book_name)
    {
    if(book_name != nullptr)
    {
        delete[] book_name;
    }
    
    book_name = new char[strlen(_book_name) + 1];
    strcpy(book_name, _book_name);
    }

    void Book::Set_genre(char* _book_genre)
    {
    if(book_genre != nullptr)
    {
        delete[] book_genre;
    }
    
    book_genre = new char[strlen(_book_genre) + 1];
    strcpy(book_genre, _book_genre);
    }

    void Book::Set_author(char* _book_author)
    {
    if(book_author != nullptr)
    {
        delete[] book_author;
    }
    
    book_author = new char[strlen(_book_author) + 1];
    strcpy(book_author, _book_author);
    }

    char* Book::Get_book_name()
    {
        return book_name;
    }
    char* Book::Get_genre()
    {
        return book_genre;
    }
    char* Book::Get_author()
    {
        return book_author;
    }
    