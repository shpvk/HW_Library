#include "client.h"
#include <cstring>



Client::~Client()
{
    delete[] surname;
    personal_id = 0;
}

Client::Client()
{
    surname = nullptr;
    personal_id = 0;
}


void Client::Init(const char* _surname, int _personal_id)
{
    if(surname != nullptr)
    {
        delete[] surname;
    }
    
    surname = new char[strlen(_surname) + 1];
    strcpy(surname, _surname);

}


