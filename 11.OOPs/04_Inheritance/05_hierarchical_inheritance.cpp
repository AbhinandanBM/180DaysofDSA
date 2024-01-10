#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
    }

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
        cout << name << " " << age << " " << roll_no << " " << fees << endl;
    }
};

class Teacher : public Human
{
public:
    int salary;

    Teacher(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void display()
    {
        cout << name << " " << age << " " << salary << endl;
    }
};

int main()
{
    Student S1("Abhi", 20, 123, 999);
    S1.display(); // this will call the current object function

    Teacher T1("Guru", 45, 50000);
    T1.display();

    return 0;
}