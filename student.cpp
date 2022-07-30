#include "student.h"

student::student() {
     memset(name,0,MAX_CHARS + 1);
     gpa       = 0.0;
     gnum      = 0;
     enrolled  = false;
     tuition   = 0.0;
}

student::~student() {
     memset(name,0,MAX_CHARS + 1);
     gpa       = 0.0;
     gnum      = 0;
     enrolled  = false;
     tuition   = 0.0;
}

student::student(const student & source) : student::student()
{
     strcpy(name,source.name);
     gpa       = source.gpa;
     gnum      = source.gnum;
     enrolled  = source.enrolled;
     tuition   = source.tuition;
}
student & student::operator = (const student & source)
{
     if (this != &source) {
          memset(name,0,MAX_CHARS + 1);
          gpa       = 0.0;
          gnum      = 0;
          enrolled  = false;
          tuition   = 0.0;
          strcpy(name,source.name);
          gpa       = source.gpa;
          gnum      = source.gnum;
          enrolled  = source.enrolled;
          tuition   = source.tuition;
     }
     return *this;
}
