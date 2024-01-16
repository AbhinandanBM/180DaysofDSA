#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    // open the file
    fin.open("zoom.txt");
    // read the file
    char c;
    // fin>>c;
    // for considering the space also
    c = fin.get();

    while(!fin.eof()){
        cout<<c;
        c=fin.get();
    }

    return 0;
}