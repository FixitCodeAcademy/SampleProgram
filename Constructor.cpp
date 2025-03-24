/* Author Rahul Das */
/* Constructors C++ (Basics of OOPS C++)*/
/* Youtube channel FixitCodeAcademy https://www.youtube.com/@fixitcodeacademy1 */
/* Please like and subscribe to my youtube channel for more such contents */
/* 1. Constructors of class have same name as class name
 * 2. Constructor can be overloaded
 * 3. Constructors does not return anything 
 * 4. There are 4 types of constructors : Default constructor, Copy Constructor, Parameterized constructor, Move Constructor and Destructor
 **/

#include<iostream>
#include<string>
using namespace std;

class Constructor {
	string name;int age;
	public:
	Constructor()
	{
	   std::cout << "default constructor" << std::endl;
	   this->name = "FixitCodeAcademy";
	   this->age = 40;
	}
	Constructor(int age)
	{
	   std::cout << "Parameterized constructor" << std::endl;
	   this->age = age;
	   this->name = "Rahul";
	}
	Constructor(string name)
	{
	   std::cout << "Parameterized constructor" << std::endl;
	   this->name = name;
	   this->age = 60;
	}
	void Display()
	{
	   std::cout << "name = " << this->name << " age = " << age << std::endl;
	}
	Constructor(string name, int age);
};
Constructor::Constructor(string name, int age)
{
   Constructor::name = name;
   Constructor::age = age;
}

int main()
{
   Constructor Obj1;
   Obj1.Display();
   Constructor Obj2("Rahul");
   Obj2.Display();
   Constructor Obj3(50);
   Obj3.Display();
   Constructor Obj4("Test", 40);
   Obj4.Display();
   return 0;
}
