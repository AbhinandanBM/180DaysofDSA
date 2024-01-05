#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll_no;
    string grade;
};

int main(){
    Student S1;
    S1.name = "Abhi";
    S1.age = 19;
    S1.roll_no = 01;
    S1.grade = "A+";

    cout<<"Name: "<<S1.name<<"\nAge: "<<S1.age<<"\nRoll No: "<<S1.roll_no<<"\nGrade: "<<S1.grade<<endl;

    return 0;
}