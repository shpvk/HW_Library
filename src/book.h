
class Book
{
public:
    Book();
    ~Book();
    Book find_by_name(const char* name);
    Book find_by_genre(const char* genre);


private:
    char* book_name;
    char* book_genre;

};