#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using namespace std;

class Person
{
    protected:
        string m_name;
        size_t m_age;
        size_t m_number;

    public:
        Person();
        Person(string name="", size_t age=0, size_t number=0);
        ~Person();


};

#endif