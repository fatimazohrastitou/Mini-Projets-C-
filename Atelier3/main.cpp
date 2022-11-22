#include <iostream>

using namespace std;
class A{
public:
 void display()
{
 cout<<"La methode display de la classe A est execute."<<endl;
}
};
class B:public A{
public:
    void display()
{
  cout<<"La methode display de la classe B est execute."<<endl;
};

};
int main()
{
B b;
b.display();
    return 0;
}
