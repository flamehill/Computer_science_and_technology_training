#include <stdio.h>

class triangle { 
public: 
    double base;   //三角形底边长
    double height; // 三角形高 

public:
    double area(){ return (base * height / 2);};
};


int main()
{
    triangle tri_a;

    tri_a.base = 3.0;
    tri_a.height = 3.0;

    printf("trianle's area is:%f \n", tri_a.area());

    return 0;
}

