#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "person.hpp"

#include <iostream>

using namespace std;

class Teacher : public Person
{
    private:
        string m_subjects;
        size_t m_salary;

    public:
        Teacher();
        ~Teacher();
        

};

#endif