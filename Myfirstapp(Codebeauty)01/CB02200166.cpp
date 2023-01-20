#include <iostream>
using namespace std;

int main()
{
    // example for +,-,*,/ how to use
    float annualSalary; // type is float , use word can meaning for name something
    cout << "Please enter your annual salary " << endl;
    cin >> annualSalary; //input constant
    float monthlySalary = annualSalary / 12 ;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10 ;
    

    // about type constant
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 45678945654;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    //-1,-2,-3,.......
    cout << "Int min value is " << INT_MIN << endl;
    //+1,+2,+3,.....
    cout << "Int max value is " << INT_MAX << endl;
    
    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

    //show max and min of int
    int intMax = INT_MAX;
    cout << intMax << endl; //this mean maximum
    cout << intMax + 1; //this mean minimum

    system("pause>0");
}