#include <iostream>

using namespace std;

class complex
{
private:   //data members
    int real;
    int img;
public:
    complex(int r=0, int i=0)   //default constructor
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout<<real<<"+i"<<img<<endl;
  }
    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
   complex c1(10,15),c2(25,15),c3;

   c3 = c1 + c2;

   c3.display();
    return 0;
}
