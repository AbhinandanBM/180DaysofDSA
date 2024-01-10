#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"Hey there My name is "<<name<<endl;
    }
};

class Employee:public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"my monthly salary is:"<<salary<<endl;
    }
};

class Manager:public Employee{
    public:
    string department;

    Manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }

    void work(){
        cout<<"I am leading the department "<<department<<endl;
    }
};



int main(){
    Manager M1("Abhi",25000,"IT");
    M1.introduce();
    M1.monthly_salary();
    M1.work();

    return 0;
}