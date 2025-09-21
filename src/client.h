


class Client
{
public:
    Client();
    ~Client();
    void Init(const char* _surname, int _personal_id);
private:
    char* surname;
    int personal_id;
};