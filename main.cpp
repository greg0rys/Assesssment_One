#include "main.h"
#include "student.h"

int main()
{
     data      temp = load();
     print(temp);

// *** ADD CODE HERE
char name[MAX_CHARS + 1] = {0};
student tempS;
temp.getStudentName(name);
cout << name;

     return 0;
}
