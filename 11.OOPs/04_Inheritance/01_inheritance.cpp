#include <iostream>
using namespace std;

class Human
{
    string religion, color;

public:
    string name;
    int age, weight, height;
};

class Student : protected Human
{
    int roll_no, fees;

public:
    Student(string name, int age, int weight, int height, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << "\nAge: " << age << "\nWeight: " << weight << "\nHeight: " << height << "\nRoll No.: " << roll_no << "\nFees: " << fees << endl;
    }
};

class Teacher : protected Human
{
    int salary, id;
};

int main()
{
    Student S1("AJ", 20, 45, 160, 123, 20000);
    S1.display();

    return 0;
}