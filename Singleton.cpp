#include <iostream>

using namespace std;

class Singleton
{

protected:
  Singleton() = default;
  
public:
  
  int data;
  static Singleton& GetInstance()
  {
    static Singleton instance;
    return instance;
  }
  
  Singleton(const Singleton&) = delete;
  Singleton(Singleton&&) = delete;
  Singleton& operator=(const Singleton&) = delete;
  Singleton& operator=(Singleton&&) = delete;
  
};

int main()
{
  Singleton &singleton1 = Singleton::GetInstance();
  return 0;
}
