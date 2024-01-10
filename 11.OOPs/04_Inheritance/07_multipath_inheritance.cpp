#include <iostream>

class BaseClass
{
public:
    void display()
    {
        std::cout << "BaseClass display() called.\n";
    }
};

class DerivedClass1 : public virtual BaseClass
{
public:
    // Intentionally not overriding display() to illustrate ambiguity
};

class DerivedClass2 : public virtual BaseClass
{
public:
    // Intentionally not overriding display() to illustrate ambiguity
};

class MostDerivedClass : public DerivedClass1, public DerivedClass2
{
public:
    // No ambiguity here as MostDerivedClass doesn't override display()
};

int main()
{
    MostDerivedClass obj;
    obj.display(); // Ambiguity arises: Which display() to call?

    return 0;
}

// virtual maintains the single copy of data in both inherited classes