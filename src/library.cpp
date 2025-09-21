#include "library.h"
#include <cstring>
#include <iostream>
Library::Library()
{
    books = nullptr;
}

Library::~Library()
{
    delete[] books;
}


void Library::Give_book(Book book, int index)
{
    books[index].Set_is_book_aviable(true);
    books[index] = book;
}


Book Library::Get_book(int index)
{
    books[index].Set_is_book_aviable(false);
    return books[index];
}


    Book Library::find_by_name(const char* name, const int BOOKS_COUNTER)
    {
        for(int i = 0; i < BOOKS_COUNTER; ++i)
        {
            if(strcmp(books[i].Get_book_name(), name) == 0 )
            {
                return books[i];
            }
        }
        return Book();
    }


    Book Library::find_by_genre(const char* book_genre, const int BOOKS_COUNTER)
    {
        for(int i = 0; i < BOOKS_COUNTER; ++i)
        {
            if(strcmp(books[i].Get_genre(), book_genre) == 0 )
            {
                return books[i];
            }
        }
        return Book();
    }


    Book Library::find_by_author(const char* book_author, const int BOOKS_COUNTER)
    {
        for(int i = 0; i < BOOKS_COUNTER; ++i)
        {
            if(strcmp(books[i].Get_author(), book_author) == 0 )
            {
                return books[i];
            }
        }
        return Book();
    }



    void Library::Set_books(Book* _books)
    {
        books = _books;
    }


