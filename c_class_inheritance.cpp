#include <stdio.h>
enum sex
{
    male,
    female,
    other
};

class person
{
public:
    char name[100];
    int age;
    sex sexualtype;
};

class programer : person
{
public:
    bool backpack;   //
    bool grideshirt; //
    bool slipper;    //
};

int main()
{

    return 0;
}
