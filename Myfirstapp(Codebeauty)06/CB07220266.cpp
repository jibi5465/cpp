#include<iostream>
using namespace std;

int main(){

    //What is going to be the result of following lines?

    int a = 5, b=4;
    cout << a+ (b++) << endl;  // 5+4
    cout << (--a) +b << endl;  // 4+5

    cout << !(true&&false) << endl; //ture = 1, false = 0
    cout << (true&&false||true) << endl; 

    int x=7;
    cout << (++x <= 9 && x+2 >= 10) << endl;

    int y = 3;
    cout << (y == y++) << endl;

    float z=8;
    z += 2 ;
    cout << z << endl;
    z /=2;
    cout  << z << endl;

    system("pause > 0");
}