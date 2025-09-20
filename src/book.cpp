#include "includes.h"
#include <string.h>
    



    Book::Book()
    {
        book_name = nullptr;
        book_genre = nullptr;
    }


    Book::~Book()
    {
        delete[] book_name;
        delete[] book_genre;
    }

    Book Book::find_by_name(const char* name)
    {
        if(strcmp(book_name, name) == 0)
        {
            return *this;
        }
        else 
        {
            return Book();
        }
    }


    Book Book::find_by_genre(const char* genre)
    {
        if(strcmp(book_genre, genre) == 0)
        {
            return *this;
        }
        else 
        {
            return Book();
        }
    }
