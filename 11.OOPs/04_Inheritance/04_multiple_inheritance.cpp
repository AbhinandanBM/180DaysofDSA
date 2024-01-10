#include <iostream>
using namespace std;

class BaseClass1
{
public:
    void greet()
    {
        cout << "Hello from BaseClass1!\n";
    }
};

class BaseClass2
{
public:
    void sayHi()
    {
        cout << "Hi from BaseClass2!\n";
    }
};

class DerivedClass : public BaseClass1, public BaseClass2
{
public:
    void introduce()
    {
        cout << "I'm a DerivedClass, inheriting from both BaseClass1 and BaseClass2.\n";
    }
};

int main()
{
    DerivedClass derivedObject;

    derivedObject.greet();     // Accessing member function from BaseClass1
    derivedObject.sayHi();     // Accessing member function from BaseClass2
    derivedObject.introduce(); // Accessing member function from DerivedClass

    return 0;
}
