#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll_no;
    string grade;
};

int main(){
    // dynamic memory allocation
    Student *S = new Student;
    (*S).name = "Abhi";
    (*S).age = 20;
    S->roll_no = 123;
    S->grade = "A";

    // printing that
    cout<<S->name<<" "<<S->age<<" "<<S->roll_no<<" "<<S->grade<<endl;

    return 0;
}