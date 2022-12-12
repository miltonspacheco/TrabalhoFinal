#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "person.hpp"

#include <iostream>

using namespace std;

class Student : public Person
{
    private:
        string m_classType;

    public:
        Student();
        ~Student();
        

};

#endif