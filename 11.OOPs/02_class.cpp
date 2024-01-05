#include<iostream>
using namespace std;

class Student{
    // by default will be private
    string name;
    int age,roll_no;
    string grade;

    public:
    // setter and getter function
    void setname(string n){
        if(n.size() == 0){
            cout<<"Invalid name";
            return;
        }
        name = n;
    }
    void setage(int a){
        if(a<0 || a>100){
            cout<<"Invalid age\n";
            return;
        }
        age = a;
    }
    void setroll_no(int r){
        roll_no = r;
    }
    void setgrade(string g){
        grade = g;
    }

    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    int getroll_no(){
        return roll_no;
    }
    string getgrade(int pin){
        if(pin == 123)
            return grade;
        
        return "";
    }
};

int main(){
    Student S1;
    S1.setname("Abhi");
    S1.setage(19);
    S1.setroll_no(202301);
    S1.setgrade("A+");

    S1.getname();
    S1.getage();
    cout<<S1.getroll_no()<<endl;
    cout<<S1.getgrade(123)<<endl;

    cout<<sizeof(S1);

    return 0;
}