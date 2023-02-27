#include<iostream>
using namespace std;

int main(){

    // The factorial of a number

    int number;
    cout << "Number: ";
    cin >> number;
    int factorial = 1;

    //6!=1*2*3*4*5*6=720
    for(int i = 1; i <= number;i++){
        cout << "i = " << i << endl;
        factorial = factorial*i;
        cout << i << "! = " << factorial << endl;
    }
    
    //6! = 6*5*4*3*2*1
    /*
    for (int i = number; i >= 1; i--){
        cout << "i = " << i << endl;
        factorial = factorial*i;
    }
    */

    cout << number << "! = " << factorial << endl; 

    system("pause > 0");
}