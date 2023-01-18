// // // #include<iostream>
// // // using namespace std;
// // // int main() {
// // // int num1,num2,num3;
// // // cout<<" Enter value for first number";
// // // cin>>num1;
// // // cout<<" Enter value for second number";
// // // cin>>num2;
// // // cout<<" Enter value for third number";
// // // cin>>num3;
// // // if(num1>num2&&num1>num3) {
// // // cout<<" First number is greatest:"<<endl<<"whick is= "<<num1;
// // // } else if(num2>num1&&num2>num3) {
// // // cout<<" Second number is greatest"<<endl<<"whick is= "<<num2;
// // // } else {
// // // cout<<" Third number is greatest"<<endl<<"whick is= "<<num3;
// // // }
// // // return 0;
// // // }


// // // #include<iostream>
// // // using namespace std;
// // // int main() {
// // // int num1,num2,num3;
// // // cout<<" Enter value for first number ";
// // // cin>>num1;
// // // cout<<" Enter value for second number ";
// // // cin>>num2;
// // // cout<<" Enter value for third number ";
// // // cin>>num3;
// // // if(num1>num2&&num1>num3) {
// // // cout<<" First number is greatest:"<<endl<<"which is= "<<num1;
// // // } else if(num2>num1&&num2>num3) {
// // // cout<<" Second number is greatest"<<endl<<"which is= "<<num2;
// // // } else {
// // // cout<<" Third number is greatest"<<endl<<"which is= "<<num3;
// // // }
// // // return 0;
// // // }

// // // #include <iostream>  
// // // using namespace std;  
// // // int main()  
// // // {  
// // // int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
// // // cout<<"enter the number of row=";    
// // // cin>>r;    
// // // cout<<"enter the number of column=";    
// // // cin>>c;    
// // // cout<<"enter the first matrix element=";    
// // // for(i=0;i<r;i++)    
// // // {    
// // // for(j=0;j<c;j++)    
// // // {    
// // // cin>>a[i][j];  
// // // }    
// // // }    
// // // cout<<"enter the second matrix element=\n";    
// // // for(i=0;i<r;i++)    
// // // {    
// // // for(j=0;j<c;j++)    
// // // {    
// // // cin>>b[i][j];    
// // // }    
// // // }    
// // // cout<<"multiply of the matrix=\n";    
// // // for(i=0;i<r;i++)    
// // // {    
// // // for(j=0;j<c;j++)    
// // // {    
// // // mul[i][j]=0;    
// // // for(k=0;k<c;k++)    
// // // {    
// // // mul[i][j]+=a[i][k]*b[k][j];    
// // // }    
// // // }    
// // // }    
// // // //for printing result    
// // // for(i=0;i<r;i++)    
// // // {    
// // // for(j=0;j<c;j++)    
// // // {    
// // // cout<<mul[i][j]<<" ";    
// // // }    
// // // cout<<"\n";    
// // // }    
// // // return 0;  
// // // }
// // /*
// // #include <iostream>
// // #include <cmath>
// // using namespace std;

// // //class
// // class roots {
// // int a, b, c;
// // float r1, r2;
// // public:
// // void getdata();
// // int determinant();
// // void checkdeterminant(int);
// // };

// // void roots::getdata() {
// // cout << "Enter value of coefficient of x^2: ";
// // cin >> a;
// // cout << "Enter value of coefficient of x: ";
// // cin >> b;
// // cout << "Enter value of coefficient of 1: ";
// // cin >> c;
// // }

// // int roots::determinant() {
// // int d = b * b;
// // d -= (4 * a * c);
// // return d;
// // }

// // void roots::checkdeterminant(int d) {
// // if (d == 0) {
// // cout << "Real and equal roots\n";
// // r1 = (-1 * b);
// // r1 /= (2 * a);
// // r2 = r1;
// // cout << "Roots : " << r1 << " and " << r2 << endl;
// // }
// // else if (d > 0) {
// // cout << "Real and distinct roots\n";
// // r1 = (-1 * b) + sqrt(d);
// // r1 /= (2 * a);
// // r2 = (-1 * b) - sqrt(d);
// // r2 /= (2 * a);
// // cout << "Roots : " << r1 << " and " << r2 << endl;
// // }
// // else {
// // cout << "Imaginary roots" << endl << endl;
// // r1 = (-b)/(2*a);
// // r2 = (sqrt(-d))/(2*a);
// // cout << "Roots : " << r1 << " + i" << r2 ;
// // cout << " and " << r1 << " - i" << r2 << endl<<endl;
// // }
// // }

// // int main() {
// // roots r;

// // r.getdata();

// // cout << endl;
// // int d = r.determinant();
// // r.checkdeterminant(d);
// // cout << endl;

// // return 0;
// // }
// // */


// // // #include <iostream>
// // // using namespace std;
 
// // // class Shape {
// // //    protected:
// // //       int width, height;
     
// // //    public:
// // //       Shape( int a = 0, int b = 0){
// // //          width = a;
// // //          height = b;
// // //       }
// // //       int area() {
// // //          cout << "Parent class area :" << width * height << endl;
// // //          return width * height;
// // //       }
// // // };
// // // class Rectangle: public Shape {
// // //    public:
// // //       Rectangle( int a = 0, int b = 0):Shape(a, b) { }
     
// // //       int area () {
// // //          cout << "Rectangle class area :" << width * height << endl;
// // //          return (width * height);
// // //       }
// // // };

// // // class Triangle: public Shape {
// // //    public:
// // //       Triangle( int a = 0, int b = 0):Shape(a, b) { }
     
// // //       int area () {
// // //          cout << "Triangle class area :" << (width * height)/2 << endl;
// // //          return (width * height / 2);
// // //       }
// // // };

// // // // Main function for the program
// // // int main() {
// // //    Shape *shape;
// // //    Rectangle rec(10,7);
// // //    Triangle  tri(10,5);

// // //    // store the address of Rectangle
// // //    shape = &rec;
   
// // //    // call rectangle area.
// // //    shape->area();

// // //    // store the address of Triangle
// // //    shape = &tri;
   
// // //    // call triangle area.
// // //    shape->area();
   
// // //    return 0;
// // // }


// // /*
// // #include <iostream>
 
// // using namespace std;

// // // Base class
// // class Shape {
// //    public:
// //       void setWidth(int w) {
// //          width = w;
// //       }
// //       void setHeight(int h) {
// //          height = h;
// //       }
     
// //    protected:
// //       int width;
// //       int height;
// // };

// // // Derived class
// // class Rectangle: public Shape {
// //    public:
// //       int getArea() {
// //          return (width * height);
// //       }
// // };

// // int main(void) {
// //    Rectangle Rect;
 
// //    Rect.setWidth(5);
// //    Rect.setHeight(7);

// //    // Print the area of the object.
// //    cout << "Total area: " << Rect.getArea() << endl;

// //    return 0;
// // }
// // */

// // //C++ program to demonstrate the working
// // // of a COPY CONSTRUCTOR
// // #include <iostream>
// // using namespace std;

// // class Point {
// // private:
// // int x, y;

// // public:
// // Point(int x1, int y1)
// // {
// // x = x1;
// // y = y1;
// // }

// // // Copy constructor
// // Point(const Point& p1)
// // {
// // x = p1.x;
// // y = p1.y;
// // }

// // int getX() { return x; }
// // int getY() { return y; }
// // };

// // int main()
// // {
// // Point p1(10, 15); // Normal constructor is called here
// // Point p2 = p1; // Copy constructor is called here

// // // Let us access values assigned by constructors
// // cout << "p1.x = " << p1.getX()
// // << ", p1.y = " << p1.getY();
// // cout << "\np2.x = " << p2.getX()
// // << ", p2.y = " << p2.getY();
// // return 0;
// // }


// #include<iostream>
// using namespace std;

// class base {
// public:
// void fun_1() { cout << "base-1\n"; }
// virtual void fun_2() { cout << "base-2\n"; }
// virtual void fun_3() { cout << "base-3\n"; }
// virtual void fun_4() { cout << "base-4\n"; }
// };

// class derived : public base {
// public:
// void fun_1() { cout << "derived-1\n"; }
// void fun_2() { cout << "derived-2\n"; }
// void fun_4(int x) { cout << "derived-4\n"; }
// };

// int main()
// {
// base *p;
// derived obj1;
// p = &obj1;

// // Early binding because fun1() is non-virtual
// // in base
// p->fun_1();

// // Late binding (RTP)
// p->fun_2();

// // Late binding (RTP)
// p->fun_3();

// // Late binding (RTP)
// p->fun_4();

// // Early binding but this function call is
// // illegal (produces error) because pointer
// // is of base type and function is of
// // derived class
// // p->fun_4(5);

// return 0;
// }
// /*
// #include <iostream>
// using namespace std;

// class A {
//   public:
//     A() // Constructor
//     {
//         cout << "Constructor A\n";
//     }
// };

// class B: public virtual A {
// };

// class C: public virtual A {
// };

// class D: public B, public C {
// };

// int main() {
//   D object; // Object creation of class D.

//   return 0;
// }*/




#include <iostream>
using namespace std;
int main(){
    int nums[]={2,4,11,3};
    int target=6;
    int x,y;
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if (nums[i]+nums[j]==target){
        //  flag = 1;
          x=i;y=j;
          goto l1;
        }
      }
    }
    l1:cout<<"["<<x<<","<<y<<"]"<<endl;
    cout<<"done"<<endl;
    
}
//





