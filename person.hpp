#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using namespace std;

class Person
{
    private:
        string m_name;
        size_t m_age;
        size_t m_number;

    public:
        Person();
        ~Person();


};

#endif