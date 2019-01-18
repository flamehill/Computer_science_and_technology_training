#include <stdio.h> 
 
class Shape {
  public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()
      {
         printf("Parent Shape class area :\n");
         return 0;
      }
  protected:
      int width, height;
 
};
class Rectangle: public Shape{
   public:
      Rectangle( int a, int b):Shape(a, b) { }
      int area ()
      { 
         printf("Rectangle class area :\n");
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         printf("Triangle class area :\n");
         return (width * height / 2); 
      }
};

int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   shape = &rec; // 存储矩形的地址
   shape->area();// 调用矩形的求面积函数 area
 
   shape = &tri; // 存储三角形的地址
   shape->area();// 调用三角形的求面积函数 area
   
   return 0;
}
