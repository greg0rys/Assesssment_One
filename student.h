#pragma once
#include <iostream>
#include <cstring>
#include "main.h"

const int MAX_CHARS = 30;
class     student
{
     private:
     char                name[MAX_CHARS + 1];
     float               gpa;
     unsigned long int   gnum;
     bool                enrolled;
     double              tuition;

     public:
     student();
     ~student();
     student(const student &);
     student & operator = (const student &);
};

