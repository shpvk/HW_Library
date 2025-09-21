#include <iostream>
#include "library.h"



int main()
{
    const int BOOKS_COUNTER = 5;
    Book* books = new Book[BOOKS_COUNTER];
    books[0].Init_book("BookName1", "BookGenre1", "BookAuthor1");
    books[1].Init_book("BookName2", "BookGenre2", "BookAuthor2");
    books[2].Init_book("BookName3", "BookGenre3", "BookAuthor3");
    books[3].Init_book("BookName4", "BookGenre4", "BookAuthor4");
    books[4].Init_book("BookName5", "BookGenre5", "BookAuthor5");

    Library l1;
    l1.Set_books(books);
    
    for(int i = 0; i < BOOKS_COUNTER; ++i)
    {
        std::cout << "Book name: " << l1.books[i].Get_book_name() << std::endl;
        std::cout << "Book genre: " << l1.books[i].Get_genre() << std::endl;
        std::cout << "Book author: " << l1.books[i].Get_author() << std::endl;
    }

    return 0;
}