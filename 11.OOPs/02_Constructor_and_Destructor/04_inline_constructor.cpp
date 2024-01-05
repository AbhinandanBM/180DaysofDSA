#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

    public:
    inline Customer(string a,int b,int c):name(a),account_number(b),balance(c){

    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    Customer C1("Abhi",321,50000);

    C1.display();

    return 0;
}