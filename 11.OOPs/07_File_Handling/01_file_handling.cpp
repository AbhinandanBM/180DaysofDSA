#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    // open the file
    fout.open("zoom.txt"); //if it is not created it will create and write the data

    // write the data into the file
    fout<<"Hello Coders";

    // close the file
    fout.close();

    return 0;
}