class Book
{
public:
    Book();
    ~Book();


    void Set_book_name(char* book_name);
    void Set_genre(char* book_genre);
    void Set_author(char* book_author);

    char* Get_book_name();
    char* Get_genre();
    char* Get_author();


    void Set_is_book_aviable(bool status);
    void Init_book(const char* book_name, const char* book_genre, const char* _book_author);

private:
    char* book_name;
    char* book_genre;
    char* book_author;
    bool is_book_aviable;
};