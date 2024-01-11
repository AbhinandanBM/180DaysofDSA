#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    // virtual void speak()
    // {
    //     cout << "huhu\n";
    // }

    virtual void speak() = 0; // pure virtual class or abstract class
    // this class will not able to create a object.
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark\n";
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow\n";
    }
};

int main()
{
    // Animal *p;
    // p = new Dog();
    // p->speak();

    Animal *p;
    vector<Animal *> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cat());
    animals.push_back(new Dog());

    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }

    return 0;
}