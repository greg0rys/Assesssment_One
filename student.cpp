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

void student::getStudentName(char *name) {
    char lowerFirst[MAX_CHARS] = {tolower(this->name[0])};
    char * test = this->name;
    int length = strlen(this->name);
    int last = strlen(this->name) - 5;

    if(length < 6) {
        for(int i = 0; i < length; i++){
            test[i] = tolower(test[i]);
        }
        strcpy(name,test);
    } else {
        test[0] = tolower(test[0]);
        for(int i = last; i < last; i++){
            test[i] = tolower(test[i]);
        }
        strcpy(name,test);
    }


}
