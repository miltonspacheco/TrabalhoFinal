#ifndef CLASS1_HPP
#define CLASS1_HPP

#include "student.hpp"
#include "teacher.hpp"

#include <iostream>
#include <vector>

using namespace std;

class Class1
{
    private:
        vector<Student> alunos;
        Teacher *professor;
        size_t monthlyPayment;

    public:
        Class1();
        ~Class1();
        

};

#endif