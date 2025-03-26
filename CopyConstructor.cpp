/* Author Rahul Das */
/* Copy Constructors & Move Constructors and its need C++ (Basics of OOPS C++)*/
/* Youtube channel FixitCodeAcademy https://www.youtube.com/@fixitcodeacademy1 */
/* Please like and subscribe to my youtube channel for more such contents */
/* 1. Copy constructor creates an object using another object of same class
 * 2. Destructor
 **/

#include<iostream>
using namespace std;

class MyClass
{
   int data;
   int *ptr;
   public:
   MyClass(int value) // this is a parameterized constructor
   {
      std::cout << "Parameterised constructor..." << std::endl;
      this->data = value;
      this->ptr = new int;
      *this->ptr = 10;
   }
   MyClass(const MyClass& t)
   {
      std::cout << "Copy Constructor" << std::endl;
      this->data = t.data;
      this->ptr = new int;
      *this->ptr = *t.ptr;
   }
   ~MyClass()
   {
      std::cout << "Destructor.." << std::endl;
      delete this->ptr;
   }
   void Display()
   {
      std::cout << "Print from Display:  data = " << data << "  *ptr = " << *this->ptr << std::endl;
   }
};

int main()
{
   MyClass ob1(5);
   ob1.Display();
   MyClass ob2 = ob1;
   ob2.Display();
   return 0;
}
