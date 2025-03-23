/* Author Rahul Das */
/* Singleton Design Pattern */
/* Youtube channel FixitCodeAcademy */
/* Please like and subscribe to my youtube channel for more such contents */
/* 1. Singleton Design pattern is used when we need only one instance of class through the lifetime of program 
 * 2. Advantage - Lazy initialization */
#include <iostream>

using namespace std;

class Singleton
{

private:
  /* we want to restrict the creation of object outside of class hence private default constructor */
  Singleton() = default;
  
public:
  
  int data;
  static Singleton& GetInstance()
  {
    static Singleton instance;
    return instance;
  }
  /* delete copy constructor so that it does not get called accidentally */
  Singleton(const Singleton&) = delete;

  /* delete assignment operator */
  Singleton& operator=(const Singleton&) = delete;
  
};

int main()
{
  /*We cannot create an object outside of a class since default constructor is private */
  //Singleton singleton; 
  Singleton &singleton1 = Singleton::GetInstance();
  singleton1.data = 80;
  Singleton &singleton2 = Singleton::GetInstance();
  std::cout << "singleton1.data = " << singleton1.data << "  singleton2.data = " << singleton2.data << std::endl;
  singleton2.data = 70;
  std::cout << "singleton1.data = " << singleton1.data << "  singleton2.data = " << singleton2.data << std::endl;
  /* Since we have deleted copy constructor it will not allow us call copy constructor */
  //Singleton singleton3 = singleton1;
  return 0;
}
