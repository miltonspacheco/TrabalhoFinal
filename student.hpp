#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "person.hpp"

#include <iostream>

using namespace std;

class Student : public Person
{
    protected:
        string m_classType;

    public:
        Student();
        //Student(string name, size_t age, size_t number, string classType) : Person(name, age, number), m_name(name) {};
        ~Student();
        

};

#endif