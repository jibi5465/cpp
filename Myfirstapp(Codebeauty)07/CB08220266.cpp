#include<iostream>
using namespace std;

int main()
{

    //Program for swapping values of two variables

    int a = 20;
    int b = 10;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b << endl;

    int x = 20;
    int y = 10;
    x = x+y; //30
    y = x-y; //20
    x = x-y; //10
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    system("pause > 0");
}
