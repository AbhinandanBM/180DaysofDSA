#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
    void work()
    {
        cout << "I am working \n";
    }
};

class Student : public Human
{
    int roll_no, fees;

public:
    Student(string name, int age, int roll_no, int fees) : Human(name, age)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_no << " " << fees<<endl;
    }
};

int main()
{
    Student S1("Abhi", 20, 123, 999);
    S1.display(); // this will call the current object function

    return 0;
}